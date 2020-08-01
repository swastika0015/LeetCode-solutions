class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        res=[]
        s1counter = Counter(s)
        s2counter  = Counter(p)
        #print(s,p,s1counter,s2counter)
        for i in range(0,len(s)+1):
            ts = s[i:i+len(p)]
            #print(ts,i)
            if s2counter == Counter(ts):
                res.append(i)
                #print(res,i, Counter(ts))
        return res
        


                
