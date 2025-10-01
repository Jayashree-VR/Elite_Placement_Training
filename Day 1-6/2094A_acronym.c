#include<stdio.h>
#include<string.h>

void display(char arr[]);

int main(){
    int num;
    scanf("%d",&num);
    char arr[1000];
    for(int i=0;i<num;i++){
        scanf(" %[^\n]",arr);
        display(arr);
    }

}
void display(char arr[]){
    printf("%c",arr[0]);
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==' '){
            printf("%c",arr[i+1]);
        }
    }
    printf("\n");
}