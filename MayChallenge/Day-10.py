class Solution:
    def findJudge(self, N: int, trust: List[List[int]]) -> int:
        if N==1:
            return N
        a=[]
        b=[]
        t=0
        c=0
        for i in trust:
            a.append(i[0])
            b.append(i[1])
        for i in b:
            if i not in a:
                t=i
        for i in range(len(trust)):
                if trust[i][1]==t:
                    c+=1
        if c==N-1:
            return t
        else:
            return -1
        
