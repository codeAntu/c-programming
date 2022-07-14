#include<stdio.h>

int main()
{
    int *arr;
    int n,i,j,t,sort,a;

    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    arr=(int *)malloc((n+1)*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Elements- %d -> ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++) {

        for(j=0; j<n-1; j++) {
            if(arr[j]>arr[j+1]) {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                sort=0;
            }
        }
        if(sort) break;
    }
    printf("The exist array list is : ");
    for(i=0; i<n; i++) {
        printf(" %d ",arr[i]);
    }
    printf("\n\nEnter a new number - ");
    scanf("%d",&a);
    n=n+1;

    for(i=0; i<n; i++) {
        if(arr[i]>a) {
            for(j=n-1; j>i; j--) {
                arr[j]=arr[j-1];
            }
            arr[i]=a;
            break;
        }
    }
    printf("After Insert the list is : ");
    for(i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}
