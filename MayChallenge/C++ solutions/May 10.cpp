class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        unordered_map<int,int> inMap;
        unordered_map<int,int> outMap;
        int n=trust.size();
        for(int i=0;i<n;i++)
        {
            outMap[trust[i][0]]++;
            inMap[trust[i][1]]++;
        }
        int answer=-1;
        for(int i=1;i<=N;i++)
        {
            if(outMap[i]==0 && inMap[i]==N-1)
                answer=i;
        }
        return answer;
    }
};