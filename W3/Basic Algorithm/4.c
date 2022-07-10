#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter a value ->");
    scanf("%d",&a);
    
    if(a>=(100-10) && a<=(200+10))
        printf("True");
    else
        printf("False");
    return 0;
}
