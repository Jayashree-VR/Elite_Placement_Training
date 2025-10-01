#include <stdio.h>
int main() {
    for(int i=1;i<=7;i++){
        int num=i;
        int step=7;
        for(int j=i;j<=7;j++){
            printf("%d ",num);
            num+=step--;
        }
        printf("\n");
    }
    return 0;
}