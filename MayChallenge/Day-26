class Solution:
    def findMaxLength(self, nums: List[int]) -> int:  
        dic = {}
        maxnums = 0
        c = 0
        for i in range(len(nums)):
            if nums[i] == 1:
                c += 1
            else:
                c += -1
            if c==0:
                maxnums = i+1
            if c in dic:
                maxnums = max(maxnums,i-dic[c])
            else:
                dic[c] = i
        return maxnums
