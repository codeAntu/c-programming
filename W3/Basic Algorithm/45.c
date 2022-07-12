#include<stdio.h>

int main()
{
    int *a,*b,*c;
    int i,n;

    printf("Length is arrays -> ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));
    b=(int *)malloc(n*sizeof(int));
    c=(int *)malloc(n*sizeof(int));
    
    printf("First array \n");
    for(i=0; i<n; i++)
    {
        printf("enter number -> ");
        scanf("%d",a+i);
    }
    printf("second array \n");
    for(i=0; i<n; i++)
    {
        printf("enter number -> ");
        scanf("%d",b+i);
    }
    for(i=0; i<n; i++)
    {
        *(c+i)=*(a+i)+*(b+i);
        printf("%d ",*(c+i));
    }
    
    return 0;
}
