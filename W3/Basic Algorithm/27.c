#include<stdio.h>

int test (int,int);
int main()
{
    int a,b;
    printf(" Enter two number ->");
    scanf("%d%d",&a,&b);

    printf("%d",test(a,b));
    return 0;
}
int test(int a,int b)
{
    if(a==b)
        return 0;
    if(a%5==b%5)
        return a>b?b:a;
    return a>b?a:b;
}
