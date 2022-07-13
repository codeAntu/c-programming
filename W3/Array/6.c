#include<stdio.h>

int main()
{
    int *arr;
    int i,n,j,a;

    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Elements- %d -> ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++) {
        a=0;
        for(j=0; j<n; j++) {
            if(arr[i]==arr[j])
                a++;
        }
        if(a == 1)
            printf("%d ",arr[i]);
    }
    return 0;
}
