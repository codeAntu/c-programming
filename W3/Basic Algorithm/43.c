#include<stdio.h>

int main()
{
    int *a,i,n,len,x=0,y=0;

    printf("Length of the array -> ");
    scanf("%d",&n);
    len=(int *)malloc(n*sizeof(int));
    *a=len;
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",(a+i));
    }
    for(i=0; i<n; i++) {
        *(a+i)==10?x++:*(a+i)==20?y++:0;
    }
    if(x==2)
        printf("the array contains 10 twice\n");
    if(y==2)
        printf("the array contains 20 twice\n");

    return 0;
}
