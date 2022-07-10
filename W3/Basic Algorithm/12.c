#include<stdio.h>
int chake(int,int);
int findLarger(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers -> ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",findLarger(a,b));

    return 0;
}
int findLarger(int a,int b)
{
    if(chake(a,b))
        return a>b?a:b;
    return 0;
}
int chake (int a,int b)
{
    if(a >= 20 && a <= 30|| b>= 20 && b <= 30)
        return 1;
    return 0;
}
