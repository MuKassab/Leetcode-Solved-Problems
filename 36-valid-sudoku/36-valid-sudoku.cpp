class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //Rows And Columns
        for(int i = 0; i < 9; i++)
        {
            set<int> r, c;
            int rd = 0, cd = 0;
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] != '.')
                {
                    rd++;
                    r.insert(board[i][j]);
                }
                if(board[j][i] != '.')
                {
                    cd++;
                    c.insert(board[j][i]);
                }
            }
            if(r.size() != rd || c.size() != cd) return false;
        }
        for(int i = 0; i < 9; i += 3)
        {
            for(int j = 0; j < 9; j += 3)
            {
                set<int> block;
                int d = 0;
                for(int k = i; k < i + 3; k++)
                {
                    for(int l = j; l < j + 3; l++)
                    {
                        if(board[k][l] != '.')
                        {
                            ++d;
                            block.insert(board[k][l]);
                        }
                    }
                }
                if(block.size() != d) return false;
            }
        }
        return true;
    }
};