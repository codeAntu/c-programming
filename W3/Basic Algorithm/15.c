#include<stdio.h>
int chake(int *,int);
int main()
{
    int arr[]= {2,5,6,5,5,7,8,5,6,5,6,5,7,5,5,0};
    int len;
    len=sizeof(arr) / sizeof(int);
    chake(arr,len);
    return 0;
}
int chake(int * arr,int n)
{
    int i;
    for(i=0; i<n-1; i++)
    {
        if(arr[i]==5 && arr[i+1]==5 || arr[i]==5 && arr[i+1]==6 )
        {
            printf("%d %d\n",i,i+1);
            i++;
        }
    }
    return 0;
} 
