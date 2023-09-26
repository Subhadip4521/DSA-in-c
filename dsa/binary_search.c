//Array element linear search in c .
#include <stdio.h>

int search_value=1,position;
void search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++){
		if (x==arr[i]){
			search_value=0;
			position=i;
			break;
			}
		}
	
}

int main()
{
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
	search(arr,n,a);
	if (search_value==0)
	printf("\nElement is present at index %d",position);
	else
	printf("\nElement is not present in array ");
	
	return 0;
}