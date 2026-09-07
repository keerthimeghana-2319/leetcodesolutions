class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>freq;
        freq[0] = 1;
        int prefixsum = 0;
        int count = 0;
        for(int num : nums)
        {
            prefixsum += num;
            if(freq.find(prefixsum-goal) != freq.end())
            {
                count += freq[prefixsum - goal];
            }
            freq[prefixsum]++;
        }
        return count;
    }
};