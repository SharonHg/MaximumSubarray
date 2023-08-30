class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int adds = 0;
        int maxs = INT_MIN;

        for(int i=0; i<nums.size(); i++)
        {
            adds = max(nums.at(i), nums.at(i)+adds);
            maxs = max(adds,maxs); 
        }
        return maxs;        
    }
};