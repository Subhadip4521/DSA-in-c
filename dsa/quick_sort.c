//quick sort

#include<stdio.h>

void quick_sort(int arr[], int lb, int ub);
int partition(int arr[], int lb, int ub);


int main(){
    int n;
    printf("Enter how many elements do you want in your array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter numbers:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    quick_sort(arr, 0, n-1);
    printf("Your elements after sorting is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

void quick_sort(int arr[], int lb, int ub){
    int position;
    if(lb<ub){
        position = partition(arr,lb,ub);
        quick_sort(arr, lb, position-1);
        quick_sort(arr, position+1, ub);
    }
}

int partition(int arr[], int lb, int ub){
    int pivot,temp,temp01;
    pivot=arr[lb];
    int start=lb;
    int end=ub;

    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            temp= arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    temp01= arr[lb];
    arr[lb]=arr[end];
    arr[end]=temp01;

    return end;
}

