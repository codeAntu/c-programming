#include<stdio.h>

int main()
{
    int *arr;
    int i,n,j,k=0;

    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Elements- %d -> ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++) {
        for(j=i+1; i<n; i++) {
            if(arr[i]==arr[j])
                k++;
        }
    }
    printf("Total number of duplicate elements found in the array is : %d",k);

    return 0;
}
