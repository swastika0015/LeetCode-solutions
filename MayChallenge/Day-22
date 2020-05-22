class Solution:
    def frequencySort(self, s: str) -> str:
        d = {}
        a=[]
        for i in s:
            if i not in d:
                d[i] = 1
            else:
                d[i] += 1
        for i in (sorted(d, key=d.get, reverse=True)):
            for j in range(d[i]):
                a.append(i)
        return "".join(a)
            
            
