#include<stdio.h>

int main()
{
    int *arr;
    int i,n,max,min;

    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Elements- %d -> ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++) {

        if(arr[i]<arr[i+1])
            max=arr[i+1];

        if(arr[i]>arr[i+1])
            min=arr[i+1];

    }
    printf("max = %d.  min = %d",max,min);
    return 0;
}
