#include<stdio.h>
int chake(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers ->");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",chake(a,b));
    
    return 0;
}
int chake (int a,int b)
{
    if(a >= 40 && a <= 50 || b >=40 && b<= 50 || a >= 50 && a <= 60 && b >=50 && b<= 60)
         return 1;
    return 0;
}
