Q Link: https://leetcode.com/problems/valid-sudoku/


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_set<string>seen;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                   int c=board[i][j]-'0';
                   string row="row"+to_string(i)+to_string(c);
                   string col="col"+to_string(j)+to_string(c);
                   string box="box"+to_string((i/3)*3+(j/3))+to_string(c);
                   if(seen.find(row)!=seen.end() || seen.find(col)!=seen.end() || seen.find(box)!=seen.end()) return false;
                   else
                   {
                       seen.insert(row);
                       seen.insert(col);
                       seen.insert(box);
                   }
                }
               
            }
        }
        return true;
    }
};
 
