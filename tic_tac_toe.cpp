// #include <bits/stdc++.h>
// using namespace std;

// bool check_game(int game[3][3])
// {
//     if (game[0][0] == game[0][1] && game[0][1] == game[0][2])
//         return true;
//     if (game[1][0] == game[1][1] && game[1][1] == game[1][2])
//         return true;
//     if (game[2][0] == game[2][1] && game[2][1] == game[2][2])
//         return true;
//     if (game[0][0] == game[1][0] && game[1][0] == game[2][0])
//         return true;
//     if (game[0][1] == game[1][1] && game[1][1] == game[2][1])
//         return true;
//     if (game[0][2] == game[1][2] && game[1][2] == game[2][2])
//         return true;
//     if (game[0][0] == game[1][1] && game[1][1] == game[2][2])
//         return true;
//     if (game[0][2] == game[1][1] && game[1][1] == game[2][0])
//         return true;
//     return false;
// }

// void set_turn(int game[3][3], int n, int t)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (game[i][j] == n)
//             {
//                 if (t % 2 != 0)
//                     game[i][j] = 10;
//                 else
//                     game[i][j] = 20;
//             }
//         }
//     }
// }

// void print_game(int game[3][3])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (game[i][j] == 10)
//                 cout << "O";
//             else if (game[i][j] == 20)
//                 cout << "X";
//             else
//                 cout << game[i][j];
//             cout << " | ";
//         }
//         cout << endl
//              << "--------------" << endl;
//     }
// }

// int main()
// {
//     int game[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     print_game(game);

//     int n;
//     bool winner = false;

//     for (int i = 1; i < 10; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout << "Enter the number which you want to place (O) :- ";
//             cin >> n;
//             set_turn(game, n, i);
//             print_game(game);
//             if (check_game(game))
//             {
//                 cout << endl
//                      << endl
//                      << "First person winner...";
//                 winner = true;
//                 break;
//             }
//         }
//         else
//         {
//             cout << "Enter the number which you want to place (X) :- ";
//             cin >> n;
//             set_turn(game, n, i);
//             print_game(game);
//             if (check_game(game))
//             {
//                 cout << endl
//                      << endl
//                      << "Second person winner...";
//                 winner = true;
//                 break;
//             }
//         }
//     }

//     if (!winner)
//     {
//         cout << endl
//              << endl
//              << "Match Draw...";
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

void print(int board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " |";
        }
        cout << "---------------" << endl;
    }
}
void input(int board[3][3], int turn)
{
    bool flag = true;

    int pos;
    while (flag)
    {
        cout << "enter position for player " << turn << endl;
        cin >> pos;

        int i = (pos - 1) / 3;
        int j = (pos - 1) % 3;
        if (board[i][j] == -1)
        {
            board[i][j] = turn;

            flag = false;
        }
    }
}
int check(int board[3][3])
{
    // check for row wise
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] != -1 && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;
    }
    // check for column wise
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] != -1 && board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }
    if ((board[0][0] != -1 && board[1][1] == board[0][0] && board[1][1] == board[2][2]) || (board[2][0] != -1 && board[1][1] == board[2][0] && board[1][1] == board[0][2]))
    {
        return 1;
    }
    // int count =0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == -1)
                return 0;
        }
    }
    return 2;
}
void play(int board[3][3], int turn)
{
    input(board, turn);

    switch (check(board))
    {
    case 0:
        turn = turn == 0 ? 1 : 0;
        play(board, turn);
        break;
    case 1:
        cout << "player " << turn << " win";
        break;
    case 2:
        cout << "Draw!!!";
        break;
    }
}
int main()
{

    int turn = 0;
    int board[3][3] = {
        {-1, -1, -1},
        {-1, -1, -1},
        {-1, -1, -1}};
    print(board);
    play(board, turn);

    return 0;
}