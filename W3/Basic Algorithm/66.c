#include<stdio.h>

int test(int *,int);
int main()
{
    int *arr;
    int i,n;

    printf("Length of the array -> ");
    scanf("%d",&n);

    arr=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",(arr+i));
    }

    if(test(arr,n))
        printf("specified number of same elements appears at the start and end of the given array. ");

    return 0;
}
int test(int *arr,int n) {
    if(arr[0] == arr[n-1])
        return 1;
    return 0;
}
