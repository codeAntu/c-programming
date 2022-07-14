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
    printf("The odd elements are : ");
    for(i=0; i<n; i++) {
        if(i%2!=0)
            printf(" %d",arr[i]);
    }
    printf("\nThe even elements are : ");
    for(i=0; i<n; i++) {
        if(i%2==0)
            printf(" %d",arr[i]);
    }
    return 0;
}
