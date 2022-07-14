#include<stdio.h>

int main()
{
    int *arr;
    int n,i,j,t,sort;

    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Elements- %d -> ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++) {
        sort = 1;
        for(j=0; j<n-1; j++) {
            if(arr[j]<arr[j+1]) {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                sort=0;
            }
        }
        if(sort) break;
    }
    for(i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
