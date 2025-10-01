#include<stdio.h>
#include<string.h>

int count(char arr[]){
    int len=strlen(arr);
    if(len>10){
        return len-2;
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    scanf("%d",&num);
    char arr[1000];
    for(int i=0;i<num;i++){
        scanf(" %s",arr);
        int a=count(arr);
        if(a==0){
            printf("%s",arr);
        }
        else{
            printf("%c%d%c\n",arr[0],a,arr[strlen(arr)-1]);
        }
    printf("\n");
    }
}