#include<stdio.h>

int main()
{
    int a;
    printf("Enter a positive number ->");
    scanf("%d",&a);
    if(a % 3 == 0 || a % 7 == 0)
        printf("True");
    else
        printf("False");
    return 0;
}
