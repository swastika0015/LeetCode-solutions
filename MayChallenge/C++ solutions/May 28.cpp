class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> answer(num+1,0);
        for(int i=1;i<=num;i++)
        {
            answer[i]=((i&1)==0)?answer[i>>1]:answer[i-1]+1;
        }
        return answer;
    }
};