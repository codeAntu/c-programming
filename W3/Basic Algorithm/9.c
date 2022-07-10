#include<stdio.h>

int chakeRange(int,int);
int main()
{
    int a,b;
    printf("Enter three values = ");
    scanf("%d",&a);
    scanf("%d",&b);
printf("%d",chakeRange(a,b));
    return 0;
}

int chakeRange(int a,int b)
{
    if(a >= 20 && a <= 50 || b>=20 && b <= 50)
        return 1;

    return 0;
}
