#include<stdio.h>


int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    int tank=0;
    for(int i=0;i<gasSize;i++){
        tank=0;
        int count=0;
        int j=i;
        do{
            tank=tank-cost[j]+gas[j];
            if(tank<0){
                break;
            }
            count++;
            j=(j+1)%gasSize;

        }while(j!=i && count<gasSize);
        
        if(count==gasSize){
            return i;
        }    
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int gas[n];
    int cost[n];
    printf("Gas:");
    for(int i=0;i<n;i++){
        scanf("%d",&gas[i]);
    }
    printf("\nCost:");
    for(int i=0;i<n;i++){
        scanf("%d",&cost[i]);
    } 
    int index=canCompleteCircuit(gas,n,cost,n);
    printf("%d",index);
}