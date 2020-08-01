class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        for i in range(len(nums)-1,-1,-1):
            if nums[i] < target:
                nums.insert(i+1,target)
                break
        try:
            return nums.index(target)
        except ValueError:
            return 0
                
        
