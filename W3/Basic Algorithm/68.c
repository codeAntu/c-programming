#include<stdio.h>

int main()
{
    int *arr,*new;
    int i,n;

    printf("Length of the array -> ");
    scanf("%d",&n);

    arr=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",(arr+i));
    }

    for(i=0; i<n-1; i++) {
        new[i]=arr[i+1];
    }
    new[n-1]=arr[0];
    
    for(i=0;i<n;i++){
    printf("%d",new[i]);
    
    }
   
    return 0;
}
