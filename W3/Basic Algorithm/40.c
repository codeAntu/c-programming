#include<stdio.h>

int main()
{
    int *a,n,i,t;
    int arr[2];

    printf("How many number do you want in array -> ");
    scanf("%d",&n);
    t=(int *)malloc(n*sizeof(int));
    if(t==0) {
        printf("Not Enough Memory");
        exit (1);
    }
    *a=t;
    for(i=0; i<n; i++) {
        printf("Enter number in the 1st array -> ");
        scanf("%d",a+i);
    }
    arr[0]=*a;
    arr[1]=*(a+n-1);

    for (i=0; i<2; i++)
        printf("%d ",arr[i]);
    return 0;
}
