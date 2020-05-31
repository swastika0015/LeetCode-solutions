class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<bool> toVisit(numCourses, false), visited(numCourses, false);
        for(auto p:prerequisites)
        {
            graph[p[1]].push_back(p[0]);
        }
        vector<int> degrees(graph.size(),0);
        for(auto adj:graph)
        {
            for(auto v:adj)
            {
                degrees[v]++;
            }
        }
        for(int i=0;i<numCourses;i++)
        {
            int j = 0;
            for (;j<numCourses;j++)
            {
                if (!degrees[j])
                {
                    break;
                }
            }
            if (j == numCourses)
            {
                return false;
            }
            degrees[j]--;
            for (int v : graph[j])
            {
                degrees[v]--;
            }
        }
        return true;
    }
};