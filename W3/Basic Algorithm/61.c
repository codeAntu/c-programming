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
        printf("array contains two 5's next to each other, or two 5 separated by one element.");

    return 0;
}
int test(int *arr,n) {
    int i,j=0,k=0;
    for(i=0; i<n-1; i++) {
        if(arr[i]==5 && arr[i+1]== 5)
            return 1;
    }
    for(i=0; i<n-2; i++) {
        if(arr[i]==5 && arr[i+2]== 5)
            return 1;
    }

    return 0;
}
