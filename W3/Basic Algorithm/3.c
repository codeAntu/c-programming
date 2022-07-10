#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two values ->");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==30 || b==30 || a+b ==30)
        printf("True");
    else
        printf("False");
    return 0;
}
