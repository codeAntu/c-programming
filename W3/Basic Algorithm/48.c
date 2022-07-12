#include<stdio.h>

int main()
{
    int *a;
    int i,t,n;

    printf("Length of the array -> ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",(a+i));
    }
    t=*a;
    *a=*(a+n-1);
    *(a+n-1)=t;
    for(i=0; i<n; i++) {
        printf("%d ",*(a+i));
    }
    
    return 0;
}
