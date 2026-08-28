class Solution {
public:
    vector<int> getArray(vector<vector<int>>&matrix,int k)
    {
        vector<int>mat;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                mat.push_back(matrix[i][j]);
            }
        }
        return mat;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>res = getArray(matrix,k);
        int n = res.size();
        sort(res.begin(),res.end());
        return res[k-1];
    }
};