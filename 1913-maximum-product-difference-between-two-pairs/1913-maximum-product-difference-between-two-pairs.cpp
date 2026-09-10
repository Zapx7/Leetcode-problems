class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();

        int w = nums[n-1];
        int x = nums[n-2];
        int y = nums[0];
        int z = nums[1];

        return (w * x ) - (y * z);
    }
};