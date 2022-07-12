#include<stdio.h>
int test(int *,int);
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

    if(test(arr,n))
        printf("array of integers and return true if there is a 3 with a 5 somewhere later in the given array.");

    return 0;
}
int test(int *arr,n) {
    int i,j=0,k=0;
    for(i=0; i<n-1; i++) {
        if(arr[i]==3 && arr[i+1]== 5)
            return 1;
    }

    return 0;
}
