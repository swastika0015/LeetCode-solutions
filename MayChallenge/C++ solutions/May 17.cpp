class Solution {
public:
    bool check(int countP[], int countS[])
    {
        for(int i=0;i<26;i++)
            if(countP[i]!=countS[i])
                return false;
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int m=p.length();
        vector<int> answer;
        if(n<m)
            return answer;
        int countP[26]={0};
        int countS[26]={0};
        
        for(int i=0;i<m;i++)
        {
            countP[p[i]-'a']++;
            countS[s[i]-'a']++;
        }
        
        for(int i=m;i<n;i++)
        {
            if(check(countP,countS))
                answer.push_back(i-m);
            countS[s[i-m]-'a']--;
            countS[s[i]-'a']++;
        }
        if(check(countP,countS))
            answer.push_back(n-m);
        return answer;
    }
};