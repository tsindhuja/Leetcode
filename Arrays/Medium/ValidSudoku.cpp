class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int N = board.size();
        unordered_set<char> row[N], col[N], boxset[N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N; j++){
                int boxno = (i/3)*3 + (j/3);
                int val = board[i][j];
                if(val=='.')
                    continue;
                if(row[i].count(val) || col[j].count(val) || boxset[boxno].count(val))
                    return false;
                
                row[i].insert(val);
                col[j].insert(val);
                boxset[boxno].insert(val);
                
            }
        }
        return true;
    }
};