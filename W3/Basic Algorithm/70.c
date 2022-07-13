#include<stdio.h>

int main()
{
    int *arr,*new;
    int i,j=0,n;

    printf("Length of the array -> ");
    scanf("%d",&n);

    arr=(int *)malloc(n*sizeof(int));
    new=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n-1; i++) {
        if(arr[i]==5) {
            new[j]=arr[i+1];
            j++;
        }
    }
    for(i=0; i<j; i++) {
        printf("%d ",new[i]);
    }

    return 0;
}
