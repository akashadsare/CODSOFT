#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player = 'X';

void displayBoard() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool makeMove(int pos) {
    int row = (pos - 1) / 3;
    int col = (pos - 1) % 3;
    if(board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player;
        return true;
    }
    return false;
}

bool checkWin() {
    for(int i = 0; i < 3; i++) {
        if((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
           (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
            return true;
    }
    return (board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
           (board[0][2] == board[1][1] && board[1][1] == board[2][0]);
}

bool checkDraw() {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

void resetBoard() {
    char num = '1';
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            board[i][j] = num++;
}

int main() {
    char playAgain;
    do {
        resetBoard();
        player = 'X';
        
        while(true) {
            displayBoard();
            cout << "Player " << player << ", enter position (1-9): ";
            int pos;
            cin >> pos;
            
            if(pos < 1 || pos > 9 || !makeMove(pos)) {
                cout << "Invalid move!" << endl;
                continue;
            }
            
            if(checkWin()) {
                displayBoard();
                cout << "Player " << player << " wins!" << endl;
                break;
            }
            
            if(checkDraw()) {
                displayBoard();
                cout << "It's a draw!" << endl;
                break;
            }
            
            player = (player == 'X') ? 'O' : 'X';
        }
        
        cout << "Play again? (y/n): ";
        cin >> playAgain;
    } while(playAgain == 'y' || playAgain == 'Y');
    
    return 0;
}