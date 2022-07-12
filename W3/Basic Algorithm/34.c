#include<stdio.h>

int main()
{
    int *p,n,i=0,t;
    
    printf("How many number do you ");
    scanf("%d",&n);
    t=(int *)malloc(n*sizeof(int));
    if(t==0) {
        printf("Not Enough Memory");
        exit (1);
    }
    *p=t;
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",p+i);
    }
    if(*p == *(p+n-1)) {
        printf("First and last element are equal ");
    }
    else
        printf("First and last element are not equal");
    return 0;
};
