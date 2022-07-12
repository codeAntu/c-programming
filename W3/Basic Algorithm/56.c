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
        if(arr[i]==5)
            sum = sum + arr[i];
    }

    if(sum==15)
        printf("the sum of all 5' in the array exactly 15 in a given array of integers.  ");
    return 0;
}
