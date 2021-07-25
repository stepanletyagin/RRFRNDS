#include "algorithms.h"
#include "main.h"

vector<vector<VALUE_TYPE>> floyd_warshall(vector<vector<VALUE_TYPE>> &adjacency_matrix, VALUE_TYPE n)
{
    vector<vector<VALUE_TYPE>> FW_matrix = adjacency_matrix;

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