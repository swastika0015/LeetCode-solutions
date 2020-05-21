class StockSpanner {
public:
    deque<pair<int,int>> dq;
    int count=0;
    StockSpanner() {
        count=0;
    }
    
    int next(int price) {
        int answer;
        
        if(count==0)
        {
            dq.push_back(make_pair(0,price));
            answer=1;
            count++;
        }
        else
        {
            while(!dq.empty() && dq.back().second<=price)
                dq.pop_back();
            if(dq.empty())
                answer=count+1;
            else
                answer=count-dq.back().first;
            dq.push_back(make_pair(count,price));
            count++;
        }
        return answer;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */