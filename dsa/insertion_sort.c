//insertion sort


#include<stdio.h>

void insertion_sort(int arr[], int n);
int main(){
    int i,n;
    printf("How many elements do you want in the array to be sorted: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n); 
    printf("Your elements after sorting: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }

    
    return 0;
}

void insertion_sort(int arr[], int n){
    int i,j,temp;
    for(i=1; i<n; i++){
        temp= arr[i];
        j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
    arr[j+1]=temp;    
    }
}