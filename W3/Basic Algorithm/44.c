#include<stdio.h>

int main()
{
    int *a,i,n,len;

    printf("Length of the array -> ");
    scanf("%d",&n);
    len=(int *)malloc(n*sizeof(int));
    *a=len;
    for(i=0; i<n; i++)
    {
        printf("Enter number -> ");
        scanf("%d",(a+i));
    }
    for(i=0; i<n-1; i++)
    {
        if(*(a+i)==5 && *(a+i+1)==7)
            *(a+i+1)=1;
        i++;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}
