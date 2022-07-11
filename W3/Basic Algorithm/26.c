#include<stdio.h>

int test (int,int,int);
int diff(int,int);    
int main()
{
    int x,y,z;
    printf(" Enter three non negetive number ->");
    scanf("%d%d%d",&x,&y,&z);

    printf("%d",test(x,y,z));
    return 0;
}
int test(int x,int y,int z)
{
    if(diff(x,y)<=20 ||diff(y,z)<=20|| diff(z,x)<=20)
        return 1;
    return 0;
}
int diff (int a,int b)
{
   return a>b?a-b:b-a;
}
