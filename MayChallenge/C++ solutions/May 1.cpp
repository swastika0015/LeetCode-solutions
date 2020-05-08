// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n,mid,answer=n;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(isBadVersion(mid))
            {
                answer=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return answer;
    }
};