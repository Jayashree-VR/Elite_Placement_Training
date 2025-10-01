#include<stdio.h>
int main(){
	char arr[]={'a','a','a','a','b','b','b','c','c','d'};
	int len=10;
	char result[21];
	int index=0;
	for(int i=0;i<len;i++){
		int count=1;
		while(arr[i]==arr[i+1]){
			count++;
			i++;
		}
		result[index++]=arr[i];
		result[index++]=count+'0';
	}
	result[index]='\0';
	for(int i=0;i<index;i++){
		printf("%c ",result[i]);
	}
	return 0;
}
