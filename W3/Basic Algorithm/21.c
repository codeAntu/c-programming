#include<stdio.h> 

int main()
{
    int a;
    printf(" Enter a number ->");
    scanf("%d",&a);
    if(a<=2)
        printf("Number is within 2");
    else if (a%10==0)
        printf("Number is multiple of 10");
    else
        printf("😐");
    return 0;
}
