class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int n=points.size();
        if(n==K)
            return points;
        vector<vector<int>> answer;
        // unordered_set<vector<int>>
        priority_queue<pair<double,vector<int>>> pq;
        for(int i=0;i<K;i++)
        {
            double dist=sqrt(points[i][0]*points[i][0]+points[i][1]*points[i][1]);
            pq.push({dist,points[i]});
        }
        
        for(int i=K;i<n;i++)
        {
            double dist=sqrt(points[i][0]*points[i][0]+points[i][1]*points[i][1]);
            if(pq.top().first>dist)
            {
                pq.pop();
                pq.push({dist,points[i]});
            }
        }
        
        while(!pq.empty())
        {
            answer.push_back(pq.top().second);
            pq.pop();
        }
        return answer;
    }
};