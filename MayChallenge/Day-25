class Solution:
    def maxUncrossedLines(self, A: List[int], B: List[int]) -> int:
        result=[0]*(len(B)+1)
        for i in range(len(A)):
            for j in range(len(B))[::-1]:
                if A[i]==B[j]:
                    result[j+1] = result[j]+1
                    #print(result,A[i],B[j],j)
            for j in range(len(B)):
                result[j+1] = max(result[j+1],result[j])           
                #print(result,j)
                        
        return result[len(B)]
