class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>fr;
        for(int x : nums)
            {
                fr[x]++;
            }
        vector<int>ans;
        while(ans.size()<nums.size()){
        for(auto &c : fr)
            {
                if(c.second > 0)
                {
                    ans.push_back(c.first);
                    c.second--;
                }
            }
        }
        return ans;
    }
};