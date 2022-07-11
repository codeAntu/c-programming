#include<stdio.h>

int main()
{
    int x,y,z;
    printf(" Enter three non negetive number ->");
    scanf("%d%d%d",&x,&y,&z);

    if(x%10 == y%10 && y%10== z%10)
        printf("This integers have the same rightmost digit");
    else
        printf("You are a disappointment😠.");
    return 0;
}
