class Solution:
    def kClosest(self, points: List[List[int]], K: int) -> List[List[int]]:
        res=[[] for i in range(len(points))]
        dic={}
        j=0
        x=0
        for i in points:
            h=(i[0])**2+(i[1])**2
            if h==x:
                dic[h+1]=i
            else:
                dic[h]= i
            x=h
        print(dic)
        for i in sorted(dic.keys()):
            res[j] = dic[i]
            j+=1
        return res[:K]
