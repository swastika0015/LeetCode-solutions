class Solution {
public:
    int kadane(vector<int> A, int n) {
        int currMax=A[0],maxSoFar=A[0];
        for(int i=1;i<n;i++)
        {
            currMax=max(A[i],currMax+A[i]);
            maxSoFar=max(maxSoFar,currMax);
        }
        return maxSoFar;
    }
    int maxSubarraySumCircular(vector<int>& A) {
        int sum=0;
        int n=A.size();
        int flag=0,maxele=A[0];
        for(int i=0;i<n;i++)
        {
            if(A[i]>=0)
                flag=1;
            sum+=A[i];
            maxele=max(maxele,A[i]);
        }
        if(flag==0)
            return maxele;
        int param1=kadane(A,n);
        for(int i=0;i<n;i++)
            A[i]*=-1;
        int param2=sum+kadane(A,n);
        return max(param1,param2);
    }
};