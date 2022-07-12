#include<stdio.h>

int main()
{
    int *a,arr[3];
    int i,t,n,*x;

    printf("Length of the array -> ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",(a+i));
    }

    arr[0]=*(a+n/2-1);
    arr[1]=*(a+n/2);
    arr[2]=*(a+n/2+1);

    for(i=0; i<3; i++) {
        printf("%d ",arr[i]);
    }
    
   /* x=(a+n/2-1);
    for(i=0; i<3; i++) {
        arr[i]=*(x+i);
        printf("%d",arr[i]);
    }*/

    return 0;
}
