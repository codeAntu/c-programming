#include<stdio.h>

int main()
{
    int n;
    printf("Enter a value ->\n");
    scanf("%d",&n);
    if(n>51)
        printf("%d",3*(n-51));
    else
        printf("%d",51-n);
    return 0;
}
