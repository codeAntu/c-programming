#include<stdio.h>

int main()
{
    int *arr1,*arr2,*new;
    int i,n,j,k;

    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    arr1=(int *)malloc(n*sizeof(int));
    arr2=(int *)malloc(n*sizeof(int));
    new=(int *)malloc(2*n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Elements- %d of arr1-> ",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0; i<n; i++) {
        printf("Elements- %d of arr2-> ",i);
        scanf("%d",&arr2[i]);
    }
    for(i=0; i<n; i++) {
        new[i]=arr1[i];
    }
    for(j=i,k=0; j<(2*n); j++,k++) {
        new[j]=arr2[k];
    }
    for(i=0; i<(2*n); i++) {
        printf("%d\n",new[i]);
    }
    return 0;
}
