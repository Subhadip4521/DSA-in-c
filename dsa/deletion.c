//
#include<stdio.h>

void display(int arr[], int n){
    for ( int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}

int inddeletion(int arr[], int size, int capacity, int index){
    if (size>capacity)
    {
        return -1;
    }
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    
    return 1;

}

int main(){
    int arr[100]={1,2,6,78,35,66,634};
    int size=7, index=5; 
    display(arr, size);
    inddeletion(arr, size, 100, index);
    size-=1;
    display(arr, size);

    return 0;
}