// Array Binary Search in c  
#include<stdio.h>
void bubble_sort(int arra[],int n,int find);
void binary_search(int arr[],int low,int high,int find);

int main(){

int n,i,a;

	printf("Enter amount of storage :\t");
	scanf("%d",&n);
	int arr[n];
	printf("Enter element : \n");
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter search element :\t");
	scanf("%d",&a);

    bubble_sort(arr,n,a);
return 0;
}

void bubble_sort(int arra[],int n,int find){
    int i, j, c;
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(arra[i]> arra[j])
   {
    c = arra[i];
    arra[i] = arra[j];
    arra[j] = c;
   }
  }
 }

binary_search(arra,0,n-1,find);
}

void binary_search(int arr[],int low,int high,int find){
  if (high >= low) 
  {
    int mid = low + (high - low) / 2;


    if (arr[mid] == find)
      printf("\n Searching element present in array ");

    
    if (arr[mid] > find)
       binary_search(arr,low,mid - 1,find);

    binary_search(arr,mid + 1,high,find);
    
 
  }
   else 
    printf("\nSearching element not present in array ");
  
}