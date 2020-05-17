class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        int low=0,high=n-1,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(mid==0)
                if(nums[mid+1]!=nums[mid])
                    return nums[mid];
            if(mid==n-1)
                if(nums[mid]!=nums[mid-1])
                    return nums[mid];
            
            if(nums[mid+1]!=nums[mid] && nums[mid]!=nums[mid-1])
                return nums[mid];
            if(mid&1)
            {
                if(nums[mid]==nums[mid-1])
                    low=mid+1;
                else
                    high=mid-1;
            }
            else
            {
                if(nums[mid]==nums[mid+1])
                    low=mid+2;
                else
                    high=mid;
            }
        }
        return nums[0];
    }
};