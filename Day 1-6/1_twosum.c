int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    for (int i = 1; i < numsSize; i++)
    {
        for (int j = i; j < numsSize; j++)
        {
            if (nums[j] + nums[j - i] == target)
            {
                int *sum = (int *)malloc(2 * sizeof(int));
                sum[0] = j;
                sum[1] = j - i;
                *returnSize = 2;
                return sum;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
