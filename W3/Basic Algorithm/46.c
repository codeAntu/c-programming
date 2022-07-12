#include<stdio.h>

int main()
{
    int *a;
    int i,n;

    printf("Length of array (Enter only even number)-> ");
    scanf("%d",&n);
    if(n%2!=0)
        n++;
    a=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",(a+i));
    }
    printf("%d",*(a+n/2-1));
    printf("%d",*(a+n/2));
    return 0;
}
