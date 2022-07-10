#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number -> ");
    scanf("%d%d",&a,&b);
    if(a==5 || b==5)
        printf("One is 5");
    else if(a+b==5)
        printf("Sum of them = 5");
    else if(a>b?a-b:b-a == 5)
        printf("Difference of them ==5 ");
    return 0;
}
