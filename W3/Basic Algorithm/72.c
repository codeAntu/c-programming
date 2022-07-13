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
    for(i=0; i<n; i++) {
        if(arr[i]==5)
            arr[i]=0;
    }
    for(i=0; i<n; i++) {
        if(arr[i]!=0) {
            new[j]=arr[i];
            j++;
        }
    }
    j=n-1;
    for(i=0; i<n; i++) {
        if(arr[i]==0) {
            new[j]=arr[i];
            j--;
        }
    }
    for(j=0; j<n; j++) {
        printf("%d",new[j]);
    }

    return 0;
}
