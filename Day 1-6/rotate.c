#include <stdio.h>
#include <stdlib.h>

// Rotate Right
int* rotateRight(int arr[], int n, int k) {
    int *result = malloc(n * sizeof(int));
    k = k % n;
    for (int i = 0; i < k; i++) {
        result[i] = arr[n - k + i];
    }
    for (int i = 0; i < n - k; i++) {
        result[k + i] = arr[i];
    }
    return result;
}

// Rotate Left
int* rotateLeft(int arr[], int n, int d) {
    int *result = malloc(n * sizeof(int));
    d = d % n;
    int index = 0;

    for (int i = d; i < n; i++) {
        result[index++] = arr[i];
    }
    for (int i = 0; i < d; i++) {
        result[index++] = arr[i];
    }
    return result;
}

int main() {
    int T;
    scanf("%d", &T);  // number of test cases
    while (T--) {
        int N, K, choice;
        scanf("%d %d %d", &N, &K, &choice);  
        // choice: 1 = rotate right, 2 = rotate left

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int *res;
        if (choice == 1) {
            res = rotateRight(arr, N, K);
        } else {
            res = rotateLeft(arr, N, K);
        }

        for (int i = 0; i < N; i++) {
            printf("%d ", res[i]);
        }
        printf("\n");

        free(res);
    }
    return 0;
}
