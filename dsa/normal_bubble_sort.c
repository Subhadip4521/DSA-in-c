//
#include<stdio.h>

void bubble_sort(int arr[], int n);

int main(){
    int i,n;
    printf("How many elements you want in your array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your array elements: \n");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    printf("Your array elements after sorting: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

void bubble_sort(int arr[], int n){
    int i,j,temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}