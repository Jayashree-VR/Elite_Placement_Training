#include <stdio.h>
int main() {
    int arr[] = {2, 1 , -3 , 0 , 5 , 0, -2, 3, -1};
    int n = 9;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            i=-1;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int count=0;
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(arr[l]+arr[i]+arr[r]==0){
                count++;
                l++;
                r--;
            }
            else if(arr[l]+arr[i]+arr[r]<0){
                l++;
            }
            else{
                r--;
            }
        }
            
    }
    printf("%d",count);
    return 0;
}