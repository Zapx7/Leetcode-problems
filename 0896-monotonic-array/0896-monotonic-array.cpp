class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(nums[i]< nums[i+1])
            {
                cnt1++;
            }
            else if(nums[i] > nums[i+1])
            {
                cnt2++;
            }
            else if(nums[i]==nums[i+1])
            {
                cnt1++;
                cnt2++;
            }
            else
            return false ;
        }
        if(cnt1 == n-1)
        {
            return true;
        }
        if(cnt2 == n-1)
        {
            return true;
        }
        return false;
    }
};