class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        int l1 = INT_MIN;
        int l2  = 0;
        int s1 = INT_MAX;
        int s2 = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] > l1)
            {
                l2 = l1 ;
                l1 = nums[i] ;
            }
            else if(l2 < nums[i])
            {
                l2 = nums[i];
            }
        
        
        
            if(nums[i] < s1 )
            {
                s2 = s1 ;
                s1 = nums[i];
            }
            else if(s2 > nums[i])
            {
                s2 = nums[i];
            }

        

        }
        return (l1 * l2 ) - (s1 * s2);
    }
};