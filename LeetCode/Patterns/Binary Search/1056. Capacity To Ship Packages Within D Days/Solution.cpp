class Solution {
public:
bool helper(vector<int>&weights,int days,int cap)
{
    int load = 0;
    int count = 1;
    for(int i = 0 ; i < weights.size();i++)
    {
        if(load+weights[i] <= cap)
        {
            load += weights[i];
        }
        else
        {
            load = weights[i];
            count++;
        }
    }
    return count <= days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int sum = 0;
        for(int i = 0 ; i < weights.size() ;i++)
        {
            sum+=weights[i];
        }
        int high = sum;
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            if(helper(weights,days,mid))
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