class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        if(n==2)
            return true;
        pair<int,int> slopePair=make_pair(coordinates[1][1]-coordinates[0][1],coordinates[1][0]-coordinates[0][0]);
        int gcd,numerator,denominator;
        gcd=__gcd(slopePair.first,slopePair.second);
        if(gcd)
        {
            slopePair.first=slopePair.first/gcd;
            slopePair.second=slopePair.second/gcd;
        }
        for(int i=2;i<n;i++)
        {
            numerator=coordinates[i][1]-coordinates[i-1][1];
            denominator=coordinates[i][0]-coordinates[i-1][0];
            gcd=__gcd(numerator,denominator);
            if(gcd)
            {
                numerator/=gcd;
                denominator/=gcd;
            }
            if(numerator!=slopePair.first || denominator!=slopePair.second)
                return false;
        }
        return true;
    }
};