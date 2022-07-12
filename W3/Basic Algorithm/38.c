#include<stdio.h>

int main()
{
    int *a1,*a2,n,i=0,t,sum=0;

    printf("How many number do you want in array -> ");
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
        *(a2+i)=*(a1+n-1-i);
    }
    for(i=0; i<n; i++) {
        printf("%d ",*(a2+i));
    }
    return 0;
}
