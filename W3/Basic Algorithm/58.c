#include<stdio.h>
int numof(int *,int);
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

    if(numof(arr,n))
        printf(" array of integers contains a 3 or a 5.");

    return 0;
}
int numof(int *arr,n) {
    int i,j=0,k=0;
    for(i=0; i<n; i++) {
        if(arr[i]==3)
            j++;
        if(arr[i]==5)
            k++;
    }
    return j==1&&k==1?1:0;
}
