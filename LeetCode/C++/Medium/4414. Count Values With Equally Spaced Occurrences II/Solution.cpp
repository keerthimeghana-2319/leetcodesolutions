class Solution {
public:
    bool counting(vector<int>&res)
    {
        int diff = res[1]-res[0];
        for(int i = 2; i < res.size() ; i++)
        {
            if(res[i]-res[i-1] != diff)
            {
                return false;
            }
        }
        return true;
    }
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int>res;
        unordered_map<int,vector<int>>pos;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            res[nums[i]]++;
            pos[nums[i]].push_back(i);
        }
        int count = 0;
        for(auto a : res)
        {
            if(a.second >= 3)
            {
                if(counting(pos[a.first]))
                {
                    count++;
                }
            }
        }
        return count;
    }
};