class Solution {
public:
    bool helper(vector<int>&piles,int h,int mid)
    {
        long long hour =0;
        for(int i = 0 ; i < piles.size() ; i++)
        {
            hour += ceil(piles[i]/(mid*1.0));
        }
        return hour <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            if(helper(piles,h,mid))
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
    }
};