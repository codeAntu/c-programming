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
    if((a==13 || b== 13 || c==13 )&&((a==13 || b==13 || c==13) && a!=b && b!=c))
        return a==13?b+c:b==13?a+c:a+b;
    else
        return a+b+c;
}
