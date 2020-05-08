class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> map;
        for(int i:nums)
        {
            map[i]++;
        }
        for(int i:nums)
        {
            if(map[i]>(n/2))
                return i;
        }
        return nums[0];
    }
};