class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        x=len(word1)
        y=len(word2)
        res = [[0]*(y+1) for i in range(x+1)]
        print(res)
        
        for i in range(x+1):
            res[i][0]=i
        for j in range(y+1):
            res[0][j]=j
        print(res)
        
        for i in range(1,x+1):
            for j in range(1,y+1):
                if word1[i-1] == word2[j-1]:
                    res[i][j] = res[i-1][j-1]
                else:
                    res[i][j] = 1+ min(res[i][j-1], res[i-1][j], res[i-1][j-1])
                    
        return res[-1][-1]
