#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Brute Force Solution for set zero matrix
// ! This solution works only for positive input matrix
class Solution
{
public:
    void markRow(vector<vector<int>> &matrix, int i, int cols)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
                matrix[i][j] = INT_MIN + 1;
        }
    }
    void markColumn(vector<vector<int>> &matrix, int j, int rows)
    {
        for (int i = 0; i < rows; i++)
        {
            if (matrix[i][j] != 0)
                matrix[i][j] = INT_MIN + 1;
        }
    }

    void setZeroes(vector<vector<int>> &matrix)
    {

        int rows = matrix.size();
        int cols = matrix[0].size();
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {

                if (matrix[i][j] == INT_MIN + 1)
                {
                    markRow(matrix, i, cols);
                    markColumn(matrix, j, rows);
                }
            }
        }

        // converting to 0s
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
// ---------------------------------------------------------------------------------------
// * Works for -ve input also

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0; k < row; k++)
                    {
                        if (matrix[k][j] != 0)
                        {
                            matrix[k][j] = INT_MIN + 1;
                        }
                    }

                    for (int k = 0; k < col; k++)
                    {
                        if (matrix[i][k] != 0)
                        {
                            matrix[i][k] = INT_MIN + 1;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == INT_MIN + 1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// ---------------------------------------------------------------------------------------

// ? Better Solution

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n, 0);
        vector<int> cols(m, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (matrix[i][j] == 0)
                {
                    row[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        // converting all -1s to 0s
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (row[i] == 1 || cols[j] == 1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};