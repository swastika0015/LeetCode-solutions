class Solution:
    def maxSubarraySumCircular(self, A: List[int]) -> int:
        if len(A) == 0:
            return 0
        maxTotal,maxSoFar,minSoFar,minTotal,s = A[0], A[0], A[0], A[0],A[0]
        for i in range(1, len(A)):
            maxSoFar = max(A[i], maxSoFar + A[i])
            maxTotal = max(maxTotal, maxSoFar)            
            
            minSoFar = min(A[i], minSoFar + A[i])            
            minTotal = min(minTotal, minSoFar)            
            s += A[i]
        if(s == minSoFar):
            return maxTotal
        
        return max(s - minTotal, maxTotal);
