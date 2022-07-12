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

    for(i=0; i<n-1; i++) {
        t=*(p+i);
        *(p+i)=*(p+i+1);
        *(p+i+1)= t;
    }
   */*p=t;
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",p+i);
    }
    t=*p;*/

    for(i=0; i<n; i++) {
        printf("%d",*(p+i));
    }
    return 0;
}
