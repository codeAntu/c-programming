#include<stdio.h>
#include<stdlib.h>

double median(int * nums1,int nums1Size,int * nums2,int nums2Size )
{
    int i=0,j=0,k=0,n;
    int * arr;
    double a;
    n=((nums1Size+ nums2Size)/2)+1;
    arr = (int * )malloc(n*sizeof(int));
    while (i<nums1Size && j< nums2Size && k<n) {
        if(nums1[i]<nums2[j]) {
            arr[k]=nums1[i];
            i++;
            k++;
        }
        else  if(nums1[i]>nums2[j]) {
            arr[k]=nums2[j];
            j++;
            k++;
        }
        else if(nums1[i]==nums2[j])
        {
            arr[k]=nums1[i];
            arr[k+1]=nums2[j];
            i++;
            j++;
            k+=2;
        }
    }
    if(i==nums1Size && k<n) {
        while(j<nums2Size) {
            arr[k]=nums2[j];
            j++;
            k++;
        }
    }
    if(j==nums2Size && k<n) {
        while(i<nums1Size) {
            arr[k]=nums1[i];
            i++;
            k++;
        }
    }
    if((nums1Size + nums2Size)%2!=0) {
        a=arr[n-1];
        return a;
    }
    else {
        a=((arr[n-1]+arr[n-2])*1.0)/2;
        return a;
    }
}
int main()
{
    int arr1[]= {};
    int arr2[]= {1,3,4,5};
    printf("\n%f ",median(arr1,0,arr2,4));
    return 0;
}
