#include<stdio.h>

int chakeRange(int,int);
int main()
{
    int a,b;
    printf("Enter two values = ");
    scanf("%d",&a);
    scanf("%d",&b);
printf("%d",chakeRange(a,b));
    return 0;
}
int chakeRange(int a,int b)
{
    if(a >= 100 && a <= 200 || b>=100 && b <= 200)
        return 1;

    return 0;
}
