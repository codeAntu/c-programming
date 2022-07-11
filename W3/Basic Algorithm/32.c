#include<stdio.h>

int test(int,int);
int main()
{
    int a,b,c;
    printf(" Enter two number ->");
    scanf("%d%d",&a,&b);

    printf("%d",test(a,b));
    return 0;
}
int test(int a,int b)
{
    if(a>13 && b>13)
        return 0;
    else
        return  (a>13?a-13:13-a)>(b>13?b-13:13-b)?b:a;
}
