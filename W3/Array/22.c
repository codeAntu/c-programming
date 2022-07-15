#include<stdio.h>

int main()
{
    int arr[3][3];
    int i,j,n,t;
     n=3;
    printf("Arr on 1\n");
    for(i=0; i<n; i++) {
        for(j=0; j<3; j++) {
            printf("element [%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0; i<n/2; i++) {
        for(j=0; j<n; j++) {
            t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=t;
        }
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
