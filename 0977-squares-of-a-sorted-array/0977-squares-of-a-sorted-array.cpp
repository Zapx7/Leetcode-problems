class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n);
    

    int a = 0 ; 
    int b = n-1 ;
    int pos = n-1 ;

    while( a <= b)
    {
        if(abs(nums[a]) > abs(nums[b]))
        {
            res[pos] = nums[a] * nums[a];
            a++;
        }
        else
        {
            res[pos] = nums[b] * nums[b];
            b--;

        }
        pos --;
    }
    
    return res ;
    
    } 
};