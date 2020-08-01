class Solution:
    def countSquares(self, matrix: List[List[int]]) -> int:
        c=0
        #print(len(matrix),len(matrix[0]))
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if i > 0 and j > 0 and matrix[i][j]:
                    matrix[i][j] += min(matrix[i-1][j], matrix[i][j-1], matrix[i-1][j-1])
                    #print(matrix[i][j])
                c += matrix[i][j]
        #print(matrix)
        return c
        
