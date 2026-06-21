#include <iostream>
using namespace std;

int main()
{
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char player = 'X';
    int choice;
    bool win = false;

    cout << "Welcome to 'TIC TAC TOE'" << endl;
    for (int turn = 0; turn < 9 && !win; turn++)
    {
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }

        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> choice;

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O')
        {
            cout << "Invalid move! Try again." << endl;
            turn--;
            continue;
        }

        board[row][col] = player;

        for (int i = 0; i < 3; i++)
        {
            if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
                (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            {
                win = true;
            }
        }

        if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
            (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        {
            win = true;
        }

        if (win)
        {
            cout << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << board[i][j] << " ";
                }
                cout << endl;
            }
            cout << "\nPlayer " << player << " wins!" << endl;
            break;
        }
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    if (!win)
    {
        cout << "\nIt's a draw!" << endl;
    }

    return 0;
}