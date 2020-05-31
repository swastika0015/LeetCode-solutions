class Solution {
public:
    static bool sortByCount(const pair<char,int> &p1,const pair<char,int> &p2)
    {
        return p1.second>p2.second;
    }
    
    string frequencySort(string s) {
        string answer="";
        int n=s.length();
        if(n==0)
            return answer;
        map<char,int> freqMap;
        for(int i=0;i<n;i++)
            freqMap[s[i]]++;
        
        vector<pair<char, int>> vec;

	
        map<char, int> :: iterator it;
        for (it=freqMap.begin(); it!=freqMap.end(); it++) 
        {
            vec.push_back(make_pair(it->first, it->second));
        }

        sort(vec.begin(), vec.end(), sortByCount);
        
        for(int i=0;i<vec.size();i++)
        {
            for(int j=0;j<vec[i].second;j++)
                answer+=vec[i].first;
        }
        return answer;
    }
};