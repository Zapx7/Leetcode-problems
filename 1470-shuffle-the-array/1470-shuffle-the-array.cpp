class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> res;
        int x = nums.size();

        int f = 0 ;
        int r = x/2 ;
        for(int i = 0 ; i < x / 2  ; i++)
        {
            res.push_back(nums[f+i]);
            res.push_back(nums[r+i]);
        }

    return res ;   
    }
};