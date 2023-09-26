//Merge sort

#include<stdio.h>

void merge_sort(int a[],int lb, int ub);
void merge(int a[],int lb,int mid, int ub);

int main(){
    int n;
    printf("Enter how many elements do you want in your array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter numbers:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    merge_sort(arr, 0, n-1);
    printf("Your elements after sorting is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

void merge_sort(int a[],int lb, int ub){
    if (lb<ub){
        int mid=(lb+ub)/2;
        merge_sort(a,lb, mid);
        merge_sort(a,mid+1, ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid, int ub){
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[lb+ub];
    while (i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if (i>mid)
    {
        while(j<=ub){
            b[k]=a[j];
            j++;
            k++;
        }
    
    }
    else{
        while (i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
        
    }
    for (int k=lb;k<=ub;k++){
        a[k]=b[k];
    }
    
}



