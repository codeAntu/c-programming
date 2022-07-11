#include<stdio.h>
int main()
{
    int a;
    printf("Enter a non negetive number -> ");
    scanf("%d",&a);
    if(a<0)
        printf("Number is negetive.");
    else if(a%13==0)
        printf("Number is multiple of 13.");
    else if(a%13==1)
        printf("Number is one more than a multiple of 13.");
     else
        printf("😐");
       return 0;
} 
