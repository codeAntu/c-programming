#include<stdio.h>

int main()
{
    int arr[2];
    int i;
    for(i=0; i<2; i++) {
        printf("Enter number -> ");
        scanf("%d",&arr[i]);
    }
    if((arr[0]!=15 && arr[0] !=20)&&(arr[1]!=15 && arr[1]!=20))
        printf("Dose not contain 15 or 20");
    return 0;
}
