class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> unique;
        unordered_set<int> s;
        int m = nums1.size();
        int n = nums2.size();

        for(int i = 0 ; i < m ; i++)
        {
            s.insert(nums1[i]);
        }

        for(int i = 0 ; i < n ; i++)
        {
            if(s.find(nums2[i])!=s.end())
            {
                unique.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
    return unique ;   
    }
};