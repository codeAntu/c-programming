#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number -> ");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a%10==b%10)
        printf("Last dejit is %d",a%10);
    else
        printf("Last digit is not same.");
    return 0;
}
