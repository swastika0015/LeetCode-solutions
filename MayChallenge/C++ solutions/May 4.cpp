class Solution {
public:
    int findComplement(int num) {
        if(num==0)
            return 1;
        int digits=floor(log2(num))+1;
        long int xorval=1<<digits;
        return (xorval-1)^num;
    }
};