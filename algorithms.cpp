#include "algorithms.h"
#include "main.h"

vector<vector<int>> floyd_warshall(vector<vector<int>> &adjacency_matrix, int n)
{
    vector<vector<int>> FW_matrix = adjacency_matrix;

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (FW_matrix[i][k] && FW_matrix[k][j] && i!=j)
                {
                    if (FW_matrix[i][k] + FW_matrix[k][j] < FW_matrix[i][j] || FW_matrix[i][j] == 0)
                    {
                        FW_matrix[i][j] = FW_matrix[i][k] + FW_matrix[k][j];
                    }
                }
            }
        }

    }
    return FW_matrix;
}