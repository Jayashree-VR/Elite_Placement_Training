#include<stdio.h>
#include<string.h>
int check(char arr[]);
int main(){
    int num;
    scanf("%d",&num);
    char arr[200005];
    for(int i=0;i<num;i++){
        scanf(" %s",arr);
        if(check(arr)==1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}
int check(char arr[]){
    int len=strlen(arr);
    int count=0;
    int set=0;
    for(int i=0;i<len;i++){
        if(arr[i]=='('){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            set++;
        }
    }
    if(set>1){
        return 1;
    }
    else{
        return 0;
    }
}