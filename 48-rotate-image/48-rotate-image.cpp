class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Transpose
        int sz = matrix.size();
        for(int i = 0; i < sz; i++)
        {
            for(int j = 0; j <= i ; j++)
            {
                int x = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = x;
            }
        }
        
        //Reverse
        for(int i = 0; i < sz; i++)
        {
            for(int j = 0, k = sz - 1; j < sz / 2; j++, k--)
                swap(matrix[i][j], matrix[i][k]);
        }
        
    }
};