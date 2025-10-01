#include<stdio.h>
#include<string.h>

int check(char arr[]){
    int len=strlen(arr);
    for(int i=0;i<len-1;i++){
        if(arr[i]==arr[i+1]){
            return 1;
        }
    }
    return len;
}

int main(){
    int num,result;
    scanf("%d",&num);
    char arr[1000];
    for(int i=0;i<num;i++){
        scanf(" %s",arr);
        result=check(arr);
        printf("%d\n",result);
    }
    
}