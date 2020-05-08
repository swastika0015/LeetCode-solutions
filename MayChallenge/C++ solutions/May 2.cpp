class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int n=S.length();
        int m=J.length();
        if(n==0 || m==0)
            return 0;
        unordered_set<char> set;
        for(int i=0;i<m;i++)
            set.insert(J[i]);
        int count=0;
        for(int i=0;i<n;i++)
            if(set.find(S[i])!=set.end())
                count++;
        return count;
    }
};