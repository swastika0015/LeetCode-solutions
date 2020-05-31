class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> answer;
        int n=A.size();
        int m=B.size();
        if(n==0 || m==0)
            return answer;
        
        vector<int> tempAnswer;
        for(int i=0,j=0; i<n && j<m; )
        {
            if(A[i][1]<B[j][0])
                i++;
            else if(B[j][1]<A[i][0])
                j++;
            else
            {
                tempAnswer.clear();
                tempAnswer.emplace_back(max(A[i][0],B[j][0]));
                tempAnswer.emplace_back(min(A[i][1],B[j][1]));
                answer.emplace_back(tempAnswer);
                if(A[i][1]<B[j][1])
                    i++;
                else
                    j++;
            }
        }
        return answer;
    }
};