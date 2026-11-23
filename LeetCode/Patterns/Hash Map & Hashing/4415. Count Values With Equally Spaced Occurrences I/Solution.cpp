class Solution {
public:
    bool counting(int num,vector<int>&nums)
    {
        vector<int>res;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == num)
            {
                res.push_back(i);
            }
        }
        if(res[1]-res[0] == res[2]-res[1])
        {
            return true;
        }
        return false;
    }
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int>res;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            res[nums[i]]++;
        }
        int count = 0;
        for(auto a : res)
            {
                if(a.second == 3)
                {
                    if(counting(a.first,nums))
                    {
                        count++;
                    }
                }
            }
        return count;
    }
};