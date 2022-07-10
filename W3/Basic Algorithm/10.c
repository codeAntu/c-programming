#include<stdio.h>
int diff(int);
int chake(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers ->");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Nearest value is %d",chake(a,b));
    return 0;
}
int chake (int a,int b)
{
    if(a==b)
        return 0;
    return diff(a) > diff(b) ? b : a;
}
int diff (int x)
{
    int dif;
    dif=100-x;
    return dif>=0 ? dif : dif*(-1);
}
