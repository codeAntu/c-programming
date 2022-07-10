#include<stdio.h>

int chakeRange(int,int,int);
int main()
{
    int a,b,c;
    printf("Enter three values = ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
printf("%d",chakeRange(a,b,c));
    return 0;
}

int chakeRange(int a,int b,int c)
{
    if(a >= 20 && a <= 50 || b>=20 && b <= 50 || c>=20 && c<= 50)
        return 1;

    return 0;
}
