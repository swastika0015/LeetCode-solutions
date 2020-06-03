class Solution(object):
    def twoCitySchedCost(self, costs):
        a = [i for i,j in costs]
        b = [j - i for i,j in costs]
        return sum(a) + sum(sorted(b)[:len(costs)//2])
        
