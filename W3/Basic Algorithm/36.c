#include<stdio.h>

int main()
{
    int *p,n,i=0,t,sum=0;

    printf("How many number do you in the array -> ");
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

    for(i=0; i<n; i++) {
        sum=sum+*(p+i);

    }
    printf("sum = %d",sum);

    return 0;
}
