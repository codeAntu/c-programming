#include<stdio.h>
int main()
{
    int arr[]={2,5,5,5,7,8,5,5,5,6,5,2,2,2,0};
    int len,i;
    len=sizeof(arr) / sizeof(int);
    for(i=0; i<len-2; i++)
    {
        if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2])
        {
            printf("%d %d %d \n",i,i+1,i+2);
            i+=2;
        }
    }
    return 0;
} 
