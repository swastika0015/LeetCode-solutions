class Solution {
public:

    string removeKdigits(string num, int k) {
        int n=num.size();
        if(n==0 || n==k)
            return "0";
        string answer=num;
        for (int j = 0; j < k; j++) {
            int i = 0;
            while (i<answer.length()-1 && answer[i] <=answer[i+1]) {
                i++;
            }
            answer.erase(i,1);
        }
        while (answer.length() > 1 && answer[0] == '0')
            answer.erase(0, 1);

        if (answer.length() == 0) {
            return "0";
        }
        return answer;
    }
};