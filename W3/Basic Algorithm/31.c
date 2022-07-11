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
    if((a>=10 && a<=20)&&(a!=13 && a!= 17))
        a=0;
    if((b>=10 && b<=20)&&(b!=13 && b!= 17))
        b=0;
    if((c>=10 && c<=20)&&(c!=13 && c!= 17))
        c=0;
    return a+b+c;
}
