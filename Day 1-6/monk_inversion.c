#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int M[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &M[i][j]);
            }
        }

        long long count = 0;  

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                for (int p = i; p < N; p++) {
                    for (int q = j; q < N; q++) {
                        if (M[i][j] > M[p][q]) {
                            count++;
                        }
                    }
                }
            }
        }

        printf("%lld\n", count);
    }

    return 0;
}
