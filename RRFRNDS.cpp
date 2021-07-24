#include "RRFRNDS.h"
#include "main.h"

int recom_num(vector<vector<int>> FU_matrix, int N)
{
    int num = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (FU_matrix[i][j] == 2)
            {
                num++;
            }
        }
    }

    return num;
}