#include<stdio.h>

int main()
{
    int *arr,*new;
    int i,n;

    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    new=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Elements- %d -> ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++) {
        new[i]==arr[i];
    }
    for (i=0; i<n; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}
