class Solution:
    def reconstructQueue(self, people: List[List[int]]) -> List[List[int]]:
        res =[]
        people = sorted(people, key = lambda x: (-x[0], x[1])) #sort in descending order
        for i in people:
            res.insert(i[1],i)
            #print(i[1], i,res)
        return res
            
