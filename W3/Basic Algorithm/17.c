#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",sum(a,b));
    return 0;
}
int sum(int a,int b)
{
    int sum;
    sum = a + b;
    if(sum >= 10 && sum <=20)
        return 30;
    return 0;
}
