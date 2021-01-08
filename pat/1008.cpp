#include<stdio.h>
int main(){
    int sum,shift;
    scanf("%d %d",&sum,&shift);
    int A[sum];
    for(int i=0;i<sum;i++)
        scanf("%d",&A[i]);
    int temp=0;
    for(int i=0;i<shift;i++){
        temp=A[sum-1];
        for(int j=1;j<sum;j++)
            A[sum-j]=A[sum-j-1];
        A[0]=temp;
    }
    for(int i=0;i<sum-1;i++)
        printf("%d ",A[i]);
    printf("%d",A[sum-1]);
    return 0;
}
