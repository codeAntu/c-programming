#include<stdio.h>
int chake(int,int);
int main()
{
    int a,b;
    printf("Enter two number -> ");
    scanf("%d",&a);
    scanf("%d",&b);
    if(chake(a,b))
        printf("Frist digi is same");
    else
        printf("First digit is not same.");
    return 0;
}

int chake(int a,int b)
{
    while(a/10!=0)
    {
        a=a/10;
    }
    while(b/10!=0)
    {
        b=b/10;
    }
    return a==b;
}


