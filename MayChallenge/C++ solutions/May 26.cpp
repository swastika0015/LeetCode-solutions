class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
            if(nums[i]==0)
                nums[i]=-1;
        int sum=0;
        unordered_map<int,int> map;
        map[0]=-1;
        int max_len=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(map.find(sum)!=map.end())
            {
                if(max_len<i-map[sum])
                    max_len=i-map[sum];
            }
            else
            {
                map[sum]=i;
            }
        }
        return max_len;
    }
};