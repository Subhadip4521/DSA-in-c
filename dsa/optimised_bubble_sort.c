//
#include<stdio.h>

void bubble_sort(int arr[], int n);
int main(){
    int n,i;
    printf("Enter how many elements you want to insert in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: ");
    for( i=0; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    printf("Elements you inserted after sorting: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    
    return 0;
}

void bubble_sort(int arr[], int n){
    int temp,flag;
    for(int i=0; i<n-1; i++){
        flag=0;
        for(int j=0; j<n-1-i; j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}