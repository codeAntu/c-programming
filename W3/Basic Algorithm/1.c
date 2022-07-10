#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter value of two number->\n");
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    if(a==b)
        printf("%d",3*(a+b));
    else
        printf("%d",a+b);
    return 0;
}
