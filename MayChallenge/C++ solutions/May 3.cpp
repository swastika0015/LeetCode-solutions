class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.length();
        int m=magazine.length();
        if(m==0 && n==0)
            return true;
        if(m==0)
            return false;
        if(n==0)
            return true;
        unordered_map<char,int> map;
        for(int i=0;i<m;i++)
            map[magazine[i]]++;
        for(int i=0;i<n;i++)
        {
            if(map.find(ransomNote[i])==map.end())
                return false;
            if(map[ransomNote[i]]<1)
                return false;
            map[ransomNote[i]]--;
        }
        return true;
    }
};