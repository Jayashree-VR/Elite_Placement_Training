#include <stdio.h>

int getMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int maxGold(int m, int n, int mine[m][n]) {
    if (m == 0 || n == 0) return -1; 
    int dp[m][n];

    for (int i = 0; i < m; i++) {
        dp[i][0] = mine[i][0];
    }

    for (int j = 1; j < n; j++) {
        for (int i = 0; i < m; i++) {
            int left = dp[i][j-1];            
            int left_up = (i > 0) ? dp[i-1][j-1] : 0;  
            int left_down = (i < m-1) ? dp[i+1][j-1] : 0;

            dp[i][j] = mine[i][j] + getMax(left, left_up, left_down);
        }
    }

    int result = dp[0][n-1];
    for (int i = 1; i < m; i++) {
        if (dp[i][n-1] > result) {
            result = dp[i][n-1];
        }
    }
    return result;
}

int main() {
    int m , n ;
    scanf("%d %d",&m,&n);

    int mine[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mine[i][j]);
        }
    }

    printf("Maximum gold collected: %d\n", maxGold(m, n, mine));

    return 0;
}
