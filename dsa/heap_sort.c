//Heap sort

#include<stdio.h>

void heap_sort(int a[], int size);
void max_heapify(int a[],int size, int i);

int main(){
    int n;
    printf("Enter how many elements do you want to sort: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter numbers:\n");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }

    heap_sort(arr, n);
    printf("Your elements after sorting is: ");
    for (int i = 1; i <=n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}


void heap_sort(int a[], int size){  
    int i;
    for(i=size/2; i>0; i--){
        max_heapify(a,size,i);
    } 
    int j; 
    for (j=size; j>1; j--){
        int temp=a[1];
        a[1]=a[j];
        a[j]=temp;
        max_heapify(a,j-1,1);
    }
}
void max_heapify(int a[],int size, int i){
    int largest=i;
    int left= 2*i;
    int right= 2*i+1;
    if (left<=size && a[left]>a[largest])
    {
        largest= left;
    }
    if (right<=size && a[right]>a[largest])
    {
        largest=right;
    }
    if (largest!=i){
        int temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        max_heapify(a,size,largest);
    }
}