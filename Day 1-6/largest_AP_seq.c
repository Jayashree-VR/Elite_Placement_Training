#include <stdio.h>

int main() {
    int l;
    scanf("%d", &l);

    if (l == 0) {
        printf("-1\n");
        return 0;
    }

    int arr[l];
    for (int i = 0; i < l; i++) {
        scanf("%d", &arr[i]);
    }

    if (l < 3) {
        printf("0\n");
        return 0;
    }

    int dp[l][l];
    int maxLen = 2; // at least two numbers form an AP

    // Initialize DP
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            dp[i][j] = 2;
        }
    }

    // Fill table from right to left
    for (int j = l - 2; j >= 1; j--) {
        int i = j - 1, k = j + 1;
        while (i >= 0 && k < l) {
            if (arr[i] + arr[k] < 2 * arr[j]) {
                k++;
            } else if (arr[i] + arr[k] > 2 * arr[j]) {
                i--;
            } else {
                dp[i][j] = dp[j][k] + 1;
                if (dp[i][j] > maxLen) {
                    maxLen = dp[i][j];
                }
                i--;
                k++;
            }
        }
    }

    if (maxLen < 3) {
        printf("0\n");
    } else {
        printf("%d\n", maxLen);
    }

    return 0;
}