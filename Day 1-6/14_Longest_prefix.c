#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    int len = strlen(strs[0]);
    char* str = malloc((len + 1) * sizeof(char));

    int i = 0;
    for (; i < len; i++) {
        for (int j = 0; j < strsSize; j++) {
            if (strs[j][i] != strs[0][i]) {
                str[i] = '\0';
                return str;
            }
        }
        str[i] = strs[0][i];
    }
    str[i] = '\0';
    return str;
}

int main() {
    int m;
    scanf("%d", &m);
    char** arr = malloc(m * sizeof(char*));
    for (int i = 0; i < m; i++) {
        arr[i] = malloc(100 * sizeof(char));
        scanf("%s", arr[i]);
    }

    char* result = longestCommonPrefix(arr, m);
    printf("%s\n", result);
    return 0;
}