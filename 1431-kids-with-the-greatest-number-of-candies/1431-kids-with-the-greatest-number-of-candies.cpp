class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> cand;
        int maximum  = 0 ;
        int n = candies.size();
        for(int i = 0 ; i < n; i++)
        {
            maximum = max(maximum, candies[i]);
        }
        for(int i = 0 ; i < n ; i++)
        {
            if((candies[i]+extraCandies) >= maximum)
            {
                cand.push_back(true);
            }
            else 
             cand.push_back(false);
        }
    return cand;
    }
};