#include<stdio.h>

void display (int * arr,int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d",arr[i]);
    }

}

void  bubblesort (int * arr, int n) {
    int i,j, temp;
    for(i=0; i<n; i++) {
        for(j=0; j<n-1-i; j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main() {
    int arr[]= {6,5,4,10,2,1};
    bubblesort (arr,6);
    display (arr,6);
    return 0;
}