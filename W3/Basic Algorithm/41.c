#include<stdio.h>

int main()
{
    int arr[2];
    int i;
    for(i=0; i<2; i++) {
        printf("Enter number -> ");
        scanf("%d",&arr[i]);
    }
    for(i=0; i<2; i++) {
        if(arr[i]==15 || arr[i]==20)
            printf("Contain 15 or 20");
    }
    return 0;
}
