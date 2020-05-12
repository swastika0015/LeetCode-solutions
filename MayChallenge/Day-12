#Without using count:
class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        if len(nums)==1:
            return nums[0]
        for i in range(0,len(nums),2):
            if i< len(nums)-2 and nums[i] != nums[i+1]:
                return nums[i]
            elif i==len(nums)-1 and nums[i]!=nums[i-1]:
                return nums[i]
        return 0
        
        
 #using count:
 class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        for i in nums:
           if nums.count(i) != 2:
            return i
       return 0
