#include <stdio.h>


int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int index = low;

    for (int i= low; i< high; i++){
        if(arr[i] <= pivot){
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            index++;
        }
    }
    // swap the pivot element in correct index
    int temp = arr[index];
    arr[index] = pivot;
    arr[high] = temp;

    return index;
}

int *quick_sort(int arr[], int low, int high){
    
    if(low < high){
        int index = partition(arr,low,high);
        quick_sort(arr,index + 1,high);
        quick_sort(arr,0,index -1);
    }
    return arr;
}

int main(){
    printf("Quick Sort \n");

    int arr[] = {7,10,2,15,3,20,5};

    int length = sizeof(arr)/sizeof(arr[0]);
    int *sorted_arr = quick_sort(arr,0,length -1);

    for (int i=0; i< length; i++){
        printf("%d ", sorted_arr[i]);
    }
    return 0;
}