#include<stdio.h>
#include<stdlib.h>

int compare(const void* a,const void* b){
    return (*(int* )a-*(int*)b);
}

int** subsetsWithDup(int* arr,int m,int* r_size,int** r_colsize){
    qsort(arr,m,sizeof(int),compare);
    
}

int main(){
    int n,m;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int r_size;
    int *r_colsize;
    int** result=subsetsWithDup(arr, m, &r_size, &r_colsize);
    for(int i=0;i<r_size;i++){
        for(int j=0;j<r_colsize;j++){
            printf("%d ",result[i][j]);
        }
    }
}