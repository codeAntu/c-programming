#include<stdio.h>

int test(int,int,int);
int main()
{
    int a,b,c;
    printf(" Enter two number ->");
    scanf("%d%d%d",&a,&b,&c);

    printf("\n%d",test(a,b,c));
    return 0;
}
int test(int a,int b,int c)
{
    int large,small,mid;
    large = a<b?b<c?c:b:a<c?c:a;
    small = a>b?b>c?c:b:a>c?c:a;
    mid = a<large && a>small?a:b<large && b>small?b:c;
    if(large - mid == mid - small)
        return 1;
    return 0;
}
