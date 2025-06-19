class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char> col[9],row[9],boxes[9];


        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char val=board[i][j];

                if(val=='.'){
                    continue;
                }

                int boxindex=(i/3)*3+(j/3);


                if(row[i].count(val)||col[j].count(val)||boxes[boxindex].count(val)){
                    return false;
                }

                row[i].insert(val);
                col[j].insert(val);
                boxes[boxindex].insert(val);
            }
        }

        return true;

        
        
    }
};