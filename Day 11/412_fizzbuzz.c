/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **fizzBuzz(int n, int *returnSize)
{
    char **arr = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
        {
            arr[i] = malloc(9 * sizeof(char));
            strcpy(arr[i], "FizzBuzz");
        }
        else if ((i + 1) % 3 == 0)
        {
            arr[i] = malloc(5 * sizeof(char));
            strcpy(arr[i], "Fizz");
        }
        else if ((i + 1) % 5 == 0)
        {
            arr[i] = malloc(5 * sizeof(char));
            strcpy(arr[i], "Buzz");
        }
        else
        {
            arr[i] = (char *)malloc(6 * sizeof(char));
            sprintf(arr[i], "%d", i + 1);
        }
    }
    *returnSize = n;
    return arr;
}