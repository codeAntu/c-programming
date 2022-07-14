#include<stdio.h>

int main()
{
    int *arr;
    int i,j,n,new,posi;

    printf("Input the size of array : ");
    scanf("%d",&n);

    arr=(int *)malloc(n*sizeof(int));

    for(i=0; i<n; i++) {
        printf("element %d ->",i);
        scanf("%d",&arr[i]);
    }
    printf("Input the position where to delete::");
    scanf("%d",&posi);
    posi=posi-1;

    for(i=posi; i<n-1; i++) {
        arr[i]=arr[i+1];
    }
    for(i=0; i<n-1; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}
