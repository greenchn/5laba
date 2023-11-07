#include "mat_3.h"

void sortMatrixDescending(int** matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols - 1; j++)
        {
            for (int k = 0; k < cols - j - 1; k++)
            {
                if (matrix[i][k] < matrix[i][k + 1])
                {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
}
