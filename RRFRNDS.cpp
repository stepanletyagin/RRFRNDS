#include "RRFRNDS.h"
#include "main.h"

int recom_num(vector<vector<VALUE_TYPE>> FU_matrix, VALUE_TYPE N)
{
    VALUE_TYPE num = 0;

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