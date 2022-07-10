#include<stdio.h>

int main()
{
    int a;
    printf("Temperature = ");
    scanf("%d",&a);
    
    if(a < 0)
        printf("Temperature is less the 0");
    else if(a > 100)
        printf("Temperature is grather then 100");
    else 
        printf("Temperature is within 0 to hundreds");
        
    return 0;
}
