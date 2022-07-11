#include<stdio.h>
int test(int);
int main()
{
    int a;
    printf("Enter a non negetive number -> ");
    scanf("%d",&a);
    printf("\n%d",test(a));
    return 0;
}
int test (int a)
{
    if(a<0)
        printf("Number is negetive.");
    else if(a%3==0 && a%7==0)
        printf("The number is multiple of 3 and7.");
    else if(a%3==0)
    {
        printf("Number is multiple of 3.");
        return 0;
    }
    else if(a%7==0)
    {
        printf("Number is one more than a multiple of 7.");
        return 0;
    }
    else
        printf("😐");
    return 1;
}
