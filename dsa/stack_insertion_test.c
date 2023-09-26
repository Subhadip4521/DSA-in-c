//
#include<stdio.h>

void push(int arr[], int n);
void pop(int arr[], int n);
void display(int arr[], int n);
int main(){
    int n;
    int arr[n];
    push(arr,n);
    display(arr,n);
    pop(arr,n);
    display(arr,n);

    return 0;
}

void push(int arr[],int n){
    int top=-1;
    printf("How many elements you want to store in your stack: ");
    scanf("%d",&n);
    
    if(top==n-1){
        printf("STACK OVERFLOW !!!\n");
            
    }
    else{
        printf("Enter the elements:\n ");
        for(int j=0; j<n; j++){
            top++;
            scanf("%d",&arr[top]);
        }
    }        
}

void pop(int arr[], int n){
    int top=-1;
    if (top==-1){
        printf("STACK UNDERFLOW...\n");
    }
    else{
        printf("You popped element/s are: %d",arr[top]);
        top--;
    }
}

void display(int arr[], int n){
    int top=-1;
    if (top>=0){
        printf("Your elements in stack: ");
            for(int i=0; i<=top; i++){
                printf("%d ", arr[i]);
            }
    }
    else{
        printf("Empty stack...\n");
    }
}