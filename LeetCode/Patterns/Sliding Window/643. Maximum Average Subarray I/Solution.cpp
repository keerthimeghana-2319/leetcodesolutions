class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int l = 0;
        int r = k-1;
        int sum = 0;
        for(int i = l ; i <= r ; i++)
        {
            sum += nums[i];
        }
        maxi = sum;
        while(r < nums.size()-1)
        {
            sum -= nums[l];
            l++;
            r++;
            sum += nums[r];
            maxi = max(maxi,sum);
        }
        return (double)maxi/k;
    }
};