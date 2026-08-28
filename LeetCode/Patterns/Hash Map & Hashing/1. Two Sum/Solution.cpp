class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++)
        {
            int x = nums[i];
            for(int j = i+1; j < n ; j++)
            {
                int y = nums[j];
                if(x+y == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
    }
};