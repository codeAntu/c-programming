#include<stdio.h>

int main()
{
    int *arr;
    int i,n;

    printf("Length of the array -> ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));

    for(i=0; i<n; i++) {
        printf("Elements- %d -> ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++) {
        printf(" Element %d - %d\n",i,arr[i]);
    }
    return 0;
}
