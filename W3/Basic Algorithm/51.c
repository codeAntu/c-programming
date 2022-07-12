#include<stdio.h>

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

    for(i=0; i<n; i=i+2) {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
