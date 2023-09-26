//
#include<stdio.h>

int binarysearch(int arr[], int size, int element){
    int low,mid,high;
    low=0;
    high=size-1;

    while (low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if (arr[mid]<element)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
    
}
int main(){
    int arr[]={1,2,4,6,9,45,123,156,178};
    int size=sizeof(arr)/sizeof(int);
    int element= 45;
    int searchindex= binarysearch(arr, size, element);
    printf("Element %d is found in index %d.",element,searchindex);
    return 0;
}