#include<stdio.h>

int main()
{
    int *a,*b,*c;
    int i,j,n,m;

    printf("Length of the first array -> ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",(a+i));
    }

    printf("Length of the second array -> ");
    scanf("%d",&m);

    b=(int *)malloc(m*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",(b+i));
    }
    c=(int *)malloc((n+m)*sizeof(int));

    for(i=0; i<n; i++) {
        *(c+i)=*(a+i);
        printf("%d ",*(c+i));
    }
    for(i=0,j=n;j<(n+m); i++,j++)
    {
        *(c+j)=*(b+i);
        printf("%d ",*(c+j));
    }
    return 0;
}
