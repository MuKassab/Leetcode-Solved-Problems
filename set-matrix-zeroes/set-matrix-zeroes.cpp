class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r[205] = {}, c[205] = {};
        int isz = matrix.size();
        int jsz = matrix[0].size();
        for(int i = 0; i < isz; i++)
        {
            for(int j = 0; j < jsz; j++)
                if(!matrix[i][j]) r[i] = c[j] = 1;
        }
        for(int i = 0; i < isz; i++)
        {
            for(int j = 0; j < jsz; j++)
            {
                if(r[i] || c[j]) matrix[i][j] = 0;
            }
        }
    }
};