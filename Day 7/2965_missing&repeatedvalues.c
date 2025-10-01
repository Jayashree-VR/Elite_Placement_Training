/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findMissingAndRepeatedValues(int **grid, int gridSize, int *gridColSize, int *returnSize)
{
    int *res = (malloc(2 * sizeof(int)));
    *returnSize = 2;
    int len = gridSize * gridSize;
    int freq[len];
    for (int i = 0; i < len; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < gridSize; i++)
    {
        for (int j = 0; j < gridSize; j++)
        {
            int num = grid[i][j];
            freq[num - 1]++;
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (freq[i] == 2)
        {
            res[0] = i + 1;
        }
        if (freq[i] == 0)
        {
            res[1] = i + 1;
        }
    }
    return res;
}