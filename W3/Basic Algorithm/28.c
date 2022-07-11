#include<stdio.h>

int lastnum(int);
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
    if((a>=10 && a<=99) && (b>=10 && b<=99))
    {
        if(lastnum(a)==lastnum(b))
            return 1;
    }
    return 0;
}
int lastnum(int a)
{
    while(a/10!=0)
    {
        a=a%10;
    }
    return a;
}
