#include<stdio.h>

int main()
{
    int *arr;
    int i,n,a,b,c,large,small,mid;

    printf("Length of the array(odd) -> ");
    scanf("%d",&n);

    if(n%2==0)
        n++;
    arr=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        printf("Enter number -> ");
        scanf("%d",(arr+i));
    }
    a=*(arr);
    b=*(arr+(n/2));
    c=*(arr+n-1);

    large=a<b?b<c?c:b:a<c?c:a;
    small=a>b?b>c?c:b:a>c?c:a;
    mid=a<large && a>small?a:b<large && b>small?b:c;
    
    printf("Large = %d\n",large);
    printf("Small = %d\n",small);
    printf("Midd = %d\n",mid);

    return 0;
}
