#include "matrix_operations.h"

void print_matrix(vector<vector<int>> matrix, int N)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << "\t \t" << CYAN << matrix[i][j] << RESET << "\t";
        }
        cout << endl;
    }
}

vector<vector<int>> fill_matrix(int N)
{
    vector<vector<int>> matrix;
    vector<int> row;
    cout << "Type array:" << endl;

    unsigned int temp = 0;
    int num;

    while(temp != N)
    {
        while(row.size() != N)
        {
            cin >> num;
            row.push_back(num);
        }
        matrix.push_back(row);
        row.clear();
        ++temp;
    }

    return matrix;
}
