#include<stdio.h>
int test(int,int);
int main()
{
    int a,b;
    printf("Enter two number -> ");
    scanf("%d%d",&a,&b);
    printf("%d",test(a,b));
    return 0;
}
int test (int a,int b)
{
    if(a>=10 && a<=20 ||b>=10 && a<= 20)
    {
        printf("One or both number is/are in the range 10...20  inclusive.\n");
        return 18;
    }
    return 0;
}
