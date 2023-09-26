//selection sort
#include<stdio.h>

void select_sort(int n, int arr[]);

int main(){
    int n,i,sum_even=0,sum_odd=0;
    printf("Enter how many elements do you want in your array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter numbers:\n");
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    select_sort(n,arr);
    printf("Your elements after sorting is: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    
    if(arr[i]%2==0){
        // printf("%d ",arr[i]);
        sum_even=sum_even+arr[i];
            
    }
    else{
        // printf("%d ",arr[i]);
        sum_odd=sum_odd+arr[i];
    }
    }
    
    printf("\nThe sum of even numbers are: %d\n",sum_even);
    printf("The sum of odd numbers are: %d\n",sum_odd);

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

