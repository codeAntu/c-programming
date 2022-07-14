#include<stdio.h>

int main()
{
    int *arr;
    int i,j,n,new,posi;

    printf("Input the size of array : ");
    scanf("%d",&n);

    arr=(int *)malloc((n+1)*sizeof(int));

    for(i=0; i<n; i++) {
        printf("element %d ->",i);
        scanf("%d",&arr[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d",&new);
    printf("Input the Position, where the value to be inserted :");
    scanf("%d",&posi);
    posi=posi-1;

    for(i=n; i>posi; i--) {
        arr[i]=arr[i-1];
    }
    arr[posi]=new;

    for(i=0; i<=n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}
