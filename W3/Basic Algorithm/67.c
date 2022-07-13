#include<stdio.h>

int test(int *,int);
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

    test(arr,n);

    return 0;
}
int test(int *arr,int n) {
    int i;
    for(i=0; i<n-2; i++) {
        if(arr[i]<arr[i+1] && arr[i]<arr[i+1]) {
            {}
            printf("%d %d %d \n",i,i+1,i+2);

        }
    }
    return 0;
}
