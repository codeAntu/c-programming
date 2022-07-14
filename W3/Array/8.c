#include<stdio.h>

int main()
{
    int *arr,*new;
    int i,n,j,a,b;

    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Elements- %d -> ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++) {
        a=1;
        b=0;
        for(j=0; j<n; j++) {
            if(arr[i]==arr[j])
                b++;
        }
        for (j=i-1; j>=0; j--) {
            if(arr[i]==arr[j])
                a=0;
        }
        if(a)
            printf("%d occars %d time \n",arr[i],b);
    }
    return 0;
}
