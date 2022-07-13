#include<stdio.h>

int main()
{
    int *arr;
    int i,n;

    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));

    for(i=0; i<n; i++) {
        printf("Elements- %d -> ",i);
        scanf("%d",&arr[i]);
    }
    printf("The values store into the array are :\n");
    for(i=0; i<n; i++) {
        printf(" %d\n",arr[i]);
    }
    printf("The values store into the array in reverse are :\n");
    for(i=n-1; i>=0; i--) {
        printf("%d\n",arr[i]);
    }
    return 0;
}
