#include <stdio.h>

int *bubble_sort(int arr[], int length){

    for (int i =0; i < length; i++){
        for (int k=0; k < length-i-1; k++){
            if(arr[k] > arr[k+1]){
                int temp = arr[k+1];
                arr[k+1] = arr[k];
                arr[k] = temp;
            }
        }
    }
    return arr;
}


int main (){

    printf("Bubble Sort \n");
    int arr[] = {23,5,67,12,34,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    int *sorted_arr = bubble_sort(arr,length);

    for (int i=0; i< length; i++){
        printf("%d ", sorted_arr[i]);
    }

    printf("\n");
    return 0;
}