class Solution:
    def intervalIntersection(self, A: List[List[int]], B: List[List[int]]) -> List[List[int]]:
        i=0
        j=0
        res=[]
        while i < len(A) and j < len(B):
            if A[i][1] >= B[j][0] and B[j][1] >= A[i][0]:
                res.append([max(A[i][0],B[j][0]), min(A[i][1],B[j][1])])
                #print(res,i,j)
            if A[i][1] < B[j][1]:
                i += 1
            else:
                j += 1
        return res
        
