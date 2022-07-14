#include<stdio.h>

int main()
{
    int *arr;
    int i,j,n,min,mincomp,len;

    printf("Length of the array -> ");
    scanf("%d",&len);

    arr=(int *)malloc(len*sizeof(arr[0]));
    printf("Enter the values in array : \n");
    for(i=0; i<len; i++) {
        printf("element %d :",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of n :");
    scanf("%d",&n);

    min=arr[0];
    for(i=1; i<len; i++) {
        if(arr[i]<min)
            min=arr[i];
    }
    for(i=1; i<n; i++) {
        mincomp=arr[0];
        for(j=0; j<len; j++) {
            if(arr[j]<mincomp && arr[j]>min)
                mincomp=arr[j];
        }
        min=mincomp;
    }
    printf("your value is  %d",min);

    return 0;
}
