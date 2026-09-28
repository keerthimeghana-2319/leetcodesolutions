class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>Res;
        int maxi = 0;
        for(int i = 0 ; i < nums.size()-k+1 ; i++)
        {
            maxi = nums[i];
            for(int j = i ; j < (i+k) ; j++)
            {
                maxi = max(maxi,nums[j]);
            }
            Res.push_back(maxi);
        }
        return Res;
    }
};