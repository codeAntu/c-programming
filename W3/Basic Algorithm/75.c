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
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n-1; i++) {
        if(arr[i]==15 && arr[i+1] == 15)
            printf("%d %d\n",i,i+1);
    }
    return 0;
}
