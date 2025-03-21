#include <stdio.h>


int * selection_sort(int arr[], int length){

    for (int i=0; i<length; i++){
        int min = arr[i];

        int index ;
        for(int k =i; k < length; k++){
            if(arr[k] <= min){
                min = arr[k];
                index = k;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    return arr;
}

int main(){
    printf("Selection Sort \n");

    int arr[] = {23,4,6,5,4,90,87};
    int length = sizeof(arr)/sizeof(arr[0]);
    int *sorted_array = selection_sort(arr,length);

    for (int i=0; i<length; i++){
        printf("%d ", sorted_array[i]);
    }
    printf("\n");
    return 0;
}