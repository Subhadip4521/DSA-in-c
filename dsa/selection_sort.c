//selection sort
#include<stdio.h>

void select_sort(int n, int arr[]);

int main(){
    int n;
    printf("Enter how many elements do you want in your array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter numbers:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    select_sort(n,arr);
    printf("Your elements after sorting is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

void select_sort(int n, int arr[]){
    int min,temp;
    for(int i=0; i<n-1; i++){
        min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
    if(min!=i){
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    }
}

