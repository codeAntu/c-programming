#include<stdio.h>

int firstdigg(int);
int main()
{
    int *arr;
    int i,n,sum=0;

    printf("Length of the array -> ");
    scanf("%d",&n);

    arr=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",(arr+i));
    }
    for(i=0; i<n-1; i++) {
        if(arr[i]== 6 &&firstdigg(arr[i+1])==5) {
            sum=sum+ arr[i];
            i++;
        }
        else
            sum = sum +arr[i];
    }

    if(arr[n-2]!=6 && firstdigg(arr[n-1])!=5)
        sum = sum + arr[n-1];

    printf("%d",sum);
    return 0;
}

int firstdigg(int a) {
    while(a/10!=0)
        a=a/10;
    return a;
}
