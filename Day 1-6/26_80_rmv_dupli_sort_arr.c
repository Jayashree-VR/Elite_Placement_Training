#include<stdio.h>
int rmvdupli(int *arr, int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(i<2 || arr[j]!=arr[i-2]){
            arr[i]=arr[j];
            i++;
        }
    }
    return i;
}

int remv(int *arr1,int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(i<1 || arr1[j]!=arr1[i-1]){
            arr1[i]=arr1[j];
            i++;
        }
    }
    return i;
}

int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    int arr1[num];
    printf("ARR:");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nARR1:");
    for(int i=0;i<num;i++){
        scanf("%d",&arr1[i]);
    }
    int k=rmvdupli(arr,num);
    int r=remv(arr1,num);
    printf("Removing Duplicates by keeping atmost 2 frequescy:\n");
    for(int i=0;i<k;i++){
        printf("%d ",arr[i]);
    }

    printf("Removing all duplicates and add zero at last:\n");
    for(int i=0;i<num;i++){
        if(i<r){
            printf("%d ",arr1[i]);
        }
        else{
            printf(" 0");
        }
    }
}