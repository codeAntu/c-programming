#include<stdio.h>

int main()
{
    int *arr;
    int i,n,sum=0;

    printf("Length of the array -> ");
    scanf("%d",&n);

    arr=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",(arr+i));
    }
    for(i=0; i<n; i++) {
        if(arr[i]!=17)
        sum=sum+arr[i];
    }
    printf("Sum = %d",sum);

    return 0;
}
