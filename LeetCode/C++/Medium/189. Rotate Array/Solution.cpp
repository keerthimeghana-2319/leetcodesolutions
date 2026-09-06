class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size()) k %= nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end()-(nums.size()-k));
        reverse(nums.end()-(nums.size()-k),nums.end());
    }
};