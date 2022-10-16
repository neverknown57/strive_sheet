#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void solve(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
        }
    }
    vector<vector<char>> solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
        return board;
    }
};
int main()
{
    vector<vector<char>> board{
        {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
        {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
        {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
        {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
        {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
        {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
        {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
        {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
        {'7', '.', '6', '1', '8', '5', '4', '.', '9'}};
    solution obj;

    obj.solveSudoku(board);
}