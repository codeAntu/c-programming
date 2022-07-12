#include<stdio.h>

int main()
{
    int *a1,*a2,n,i=0,t,sum=0;
    int arr[2];

    printf("How many number do you in arrays-> ");
    scanf("%d",&n);
    t=(int *)malloc(n*sizeof(int));
    if(t==0) {
        printf("Not Enough Memory");
        exit (1);
    }
    *a1=t;
    *a2=t;
    for(i=0; i<n; i++) {
        printf("Enter number in the 1st array -> ");
        scanf("%d",a1+i);
    }
    for(i=0; i<n; i++) {
        printf("Enter number in the 2nd array -> ");
        scanf("%d",a2+i);
    }
    arr[0]=*(a1+n/2);
    arr[1]=*(a2+n/2);

    for(i=0; i<2; i++) {
        printf("\n");
        printf("%d\n",arr[i]);
    }
    return 0;
}
