#include<stdio.h>

int main()
{
    int *p1,*p2,n1,n2,i=0,t;

    printf("How many number do you in first array  ");
    scanf("%d",&n1);
    t=(int *)malloc(n1*sizeof(int));
    if(t==0) {
        printf("Not Enough Memory");
        exit (1);
    }
    *p1=t;
    for(i=0; i<n1; i++) {
        printf("Enter number -> ");
        scanf("%d",p1+i);
    }
    
    printf("How many number do you in 2nd array ");
    scanf("%d",&n2);
    t=(int *)malloc(n2*sizeof(int));
    if(t==0) {
        printf("Not Enough Memory");
        exit (1);
    }
    *p2=t;
    for(i=0; i<n2; i++) {
        printf("Enter number -> ");
        scanf("%d",p2+i);
    }
    
    if(*p1==*p2 && *(p1+n1-1) == *(p2+n2-1))
        printf("1");
    else
        printf("0");
    return 0;
}
