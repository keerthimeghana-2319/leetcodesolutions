class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l = 0;
        int r = 0;
        int maxi = 0;
        int len = 0;
        int totcost = 0;
        while ( r < s.size())
        {
            totcost += abs(s[r]-t[r]);
            while(totcost > maxCost)
            {
                totcost -= abs(s[l]-t[l]);
                l++;
            }
            maxi = max(maxi,(r-l+1));
            r++;
        }
        return maxi;
    }
};