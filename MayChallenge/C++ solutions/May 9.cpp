class Solution {
public:
    bool isPerfectSquare(int num) {
        // for(long int i=1;i*i<=num;i++)
        //     if(num%i==0 && num/i==i)
        //         return true;
        // return false;
        long mid, square=0,left=1,right=num;
        if(num==1)
            return true;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            square=mid*mid;
            if(num==square)
                return true;
            else if(num>square)
                left=mid+1;
            else
                right=mid-1;
        }
        return false;
    }
};