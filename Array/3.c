#include<stdio.h>

int main()
{
    int *arr;
    int i,n,sum=0;

    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));

    for(i=0; i<n; i++) {
        printf("Elements- %d -> ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++) {
        sum=sum+arr[i];
    }
    printf("Sum of all elements stored in the array is : %d",sum);
    return 0;
}
