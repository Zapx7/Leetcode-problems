class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> unique;
        unordered_set<int> s;
        int m = nums1.size();
        int n = nums2.size();

        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(nums1[i]== nums2[j])

                {
                    if(s.find(nums1[i]) == s.end())
                    {
                        s.insert(nums1[i]);
                    
                        unique.push_back(nums1[i]);
                    }
                }
            }
        }
    return unique ;   
    }
};