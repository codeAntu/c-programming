#include<stdio.h>

int main()
{
    int x,y,z;
    printf(" Enter three number (x,y,z)->");
    scanf("%d%d%d",&x,&y,&z);
    
    if(y>x)
    {
        if(z>y)
            printf("x<y<z");
    }
    else
        printf("You are a disappointment😠.");
    return 0;
}
