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
        printf("array of integers and return true if the value 5 appears 5 times and there are no 5 next to each other. ");

    return 0;
}
int test(int *arr,n) {
    int i,j=0;
    for(i=0; i<n-1; i++) {
        if(arr[i] ==5 && arr[i+1]!=5)
            j++;
    }
    if(arr[n-1]==5)
        j++;

    return j==5?1:0;
}
