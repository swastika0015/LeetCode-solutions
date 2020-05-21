class Solution {
public:
    bool check(int counts1[], int counts2[])
    {
        for(int i=0;i<26;i++)
            if(counts1[i]!=counts2[i])
                return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n>m)
            return false;
        int counts1[26]={0};
        int counts2[26]={0};
        for(int i=0;i<n;i++)
        {
            counts1[s1[i]-'a']++;
            counts2[s2[i]-'a']++;
        }
        for(int i=n;i<m;i++)
        {
            if(check(counts1,counts2))
                return true;
            counts2[s2[i]-'a']++;
            counts2[s2[i-n]-'a']--;
        }
        if(check(counts1,counts2))
            return true;
        return false;
        
    }
};