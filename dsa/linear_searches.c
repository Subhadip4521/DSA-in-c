//
#include<stdio.h>

int linearsearch(int arr[], int size, int element){
    for(int i=0; i<size; i++)
    {
        if(arr[i]==element){
        return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,4,6,90,4,3,56,78,345,654,54,33,667,5};
    int size=sizeof(arr)/sizeof(int);
    int element= 56;
    int searchindex= linearsearch(arr, size, element);
    printf("Element %d is found in index %d.",element,searchindex);
    return 0;
}