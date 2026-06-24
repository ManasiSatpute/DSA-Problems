class Solution {
public:
    vector<vector<string>> ans;

    bool isSafe(vector<string>& board, int row, int col) {
        int n = board.size();

        // Check vertical column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q')
                return false;
        }

        // Check left diagonal
        for (int i = row - 1, j = col - 1;
             i >= 0 && j >= 0;
             i--, j--) {
            if (board[i][j] == 'Q')
                return false;
        }

        // Check right diagonal
        for (int i = row - 1, j = col + 1;
             i >= 0 && j < n;
             i--, j++) {
            if (board[i][j] == 'Q')
                return false;
        }

        return true;
    }

    int NQueens(vector<string>& board, int row) {
        int n = board.size();

        if (row == n) {
            ans.push_back(board);
            return 1;
        }

        int count = 0;

        for (int col = 0; col < n; col++) {
            if (isSafe(board, row, col)) {
                board[row][col] = 'Q';

                count += NQueens(board, row + 1);

                board[row][col] = '.';
            }
        }

        return count;
    }

    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));

        int count = NQueens(board, 0);

        return count;
    }
};

