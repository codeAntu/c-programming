#include<stdio.h> 

int main()
{
    int a,b,c;
    printf(" Enter three number ->");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a+b==c || b+c ==a || a+c == b)
        printf("Add the the smaller two number You will get the biger one.");
    else
        printf("You are a disappointment😠.");
    return 0;
}
