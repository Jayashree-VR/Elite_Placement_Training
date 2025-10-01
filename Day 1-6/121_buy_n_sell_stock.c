
int maxProfit(int *prices, int pricesSize)
{
    int maxp = 0;
    int min = prices[0];
    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < min)
        {
            min = prices[i];
        }
        else if (prices[i] - min > maxp)
        {
            maxp = prices[i] - min;
        }
    }
    return maxp;
}