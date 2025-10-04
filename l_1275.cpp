#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        char board[3][3];   // 3x3 board
        // make board empty
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                board[i][j] = ' ';

        // 1. Fill board with moves
        for (int i = 0; i < moves.size(); i++) {
            int r = moves[i][0];
            int c = moves[i][1];
            board[r][c] = (i % 2 == 0) ? 'A' : 'B'; // A plays first
        }

        // 2. Check winner
        for (int i = 0; i < 3; i++) {
            // Check row
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
                return string(1, board[i][0]);
            // Check column
            if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
                return string(1, board[0][i]);
        }

        // Check diagonals
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
            return string(1, board[0][0]);
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
            return string(1, board[0][2]);

        // 3. No winner
        if (moves.size() == 9) return "Draw";
        return "Pending";
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    // vector<vector<int>> moves = {{0,0},{2,0},{1,1},{2,1},{2,2}};
    // vector<vector<int>> moves = {{0,0},{1,1},{0,1},{0,2},{1,0},{2,0}};
    vector<vector<int>> moves = {{0,0},{1,1},{2,0},{1,0},{1,2},{2,1},{0,1},{0,2},{2,2}};
    cout<<s.tictactoe(moves);
    return 0;
}
