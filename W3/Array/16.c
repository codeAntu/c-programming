#include<stdio.h>

int main()
{
    int *arr;
    int i,j,n,max,maxcomp,len;

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

    max=arr[0];
    for(i=0; i<len; i++) {
        if(arr[i]>max)
            max=arr[i];
    }
    for(i=1; i<n; i++) {
        maxcomp=arr[0];
        for(j=0; j<len; j++) {
            if(arr[j]>maxcomp && arr[j]<max)
                maxcomp=arr[j];
        }
        max=maxcomp;
    }
    printf("your value is  %d",max);

    return 0;
}
