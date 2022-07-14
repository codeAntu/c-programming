#include<stdio.h>

int main()
{
    int arr[3][3],brr[3][3],new[3][3];
    int i,j;
    printf("Arr on 1\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("element [%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Arr no 2\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("element [%d][%d] :",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            new[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ",new[i][j]);
        }
        printf("\n");
    }
    return 0;
}
