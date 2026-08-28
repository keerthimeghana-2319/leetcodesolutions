class Solution {
public:
bool helper(vector<int>&bloonDay,int days, int m,int k)
{
    int flowers = 0;
    int boquets = 0;
    for(int i = 0 ; i < bloonDay.size() ;i++)
    {
        if(bloonDay[i] <= days)
        {
            flowers++;
        }
        else
        {
            boquets += flowers/k;
            flowers = 0;
        }
    }
    boquets += flowers/k;
    return boquets >= m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(lbloomDay.size() < m*k) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            if(helper(bloomDay,mid,m,k))
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