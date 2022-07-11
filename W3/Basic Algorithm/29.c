#include<stdio.h>

int sum(int,int,int);
int main()
{
    int a,b,c;
    printf(" Enter two number ->");
    scanf("%d%d%d",&a,&b,&c);

    printf("%d",sum(a,b,c));
    return 0;
}
int sum(int a,int b,int c)
{
    if(a!=b && a!=c && b!=c)
        return a+b+c;
    else
        return a==b?c:a==c?b:a;
}

