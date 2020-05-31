class Solution {
public:
    
    bool coloredNode(int i, int c, vector<int> & color, vector<vector<int>>& graph)
    {
        if(color[i]==c)
            return true;
        if(color[i]!=-1)
            return false;
        color[i]=c;
        for(auto v:graph[i])
        {
            if(c==0)
            {
                if(!coloredNode(v,1,color,graph))
                    return false;
            }
            else
            {
                if(!coloredNode(v,0,color,graph))
                    return false;
            }
                
        }
        return true;
    }
    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph=vector<vector<int>>(N+1);
        vector<int> color=vector<int>(N+1,-1);
        
        for(auto pairs:dislikes)
        {
            graph[pairs[0]].push_back(pairs[1]);
            graph[pairs[1]].push_back(pairs[0]);
        }
        
        for(int i=1;i<N+1;i++)
        {
            if(color[i]==-1 && !coloredNode(i,0,color,graph))
                return false;
        }
        return true;
    }
};