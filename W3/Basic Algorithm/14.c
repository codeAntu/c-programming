#include<stdio.h>
int chake(int *,int);
int main()
{
    int arr[]= {1,2,3,4,1,2,3,5,1,2,3};
    int len;
    len=sizeof(arr) / sizeof(int);
    chake(arr,len);
    return 0;
}
int chake(int * arr,int n)
{
    int i;
    for(i=0; i<n-2; i++)
    {
        if(arr[i]==1 && arr[i+1]==2 && arr[i+2]==3)
        {
            printf("%d %d %d \n",i,i+1,i+2);
            i+=2;
        }
    }
    return 0;
}
