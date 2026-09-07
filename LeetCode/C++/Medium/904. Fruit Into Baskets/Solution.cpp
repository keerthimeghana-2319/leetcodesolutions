class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>res;
        int l = 0;
        int r = 0;
        int maxi = 0;
        while(r < fruits.size())
        {
            res[fruits[r]]++;
            while(res.size() > 2)
            {
                res[fruits[l]]--;
                if(res[fruits[l]] == 0)
                {
                    res.erase(fruits[l]);
                }
                l++;
            }
            maxi = max(maxi,r-l+1);

            r++;
        }
        return maxi;
    }
};