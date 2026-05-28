#include<stdio.h>
int main(){
    int ar[100],max,min,i,n;
    printf("Enter the total no of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<=n-1;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<=n-1;i++){
        min=max=ar[0];
        if(ar[i]<min){
            min=ar[i];
        }
        if(ar[i]>max){
            max=ar[i];
        }
    }
    printf("Minimum element:%d\n",min);
    printf("Maximum element:%d",max);

}