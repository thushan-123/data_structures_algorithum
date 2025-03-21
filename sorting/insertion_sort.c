#include <stdio.h>


int *insertion_sort(int arr[], int length){

    for (int i=0; i < length; i++){
        int value = arr[i];
        int k = i -1;

        // elemets move to prev 
        while(k>=0 && arr[k]> value){
            arr[k+1] = arr[k];
            k--;
        }
        arr[k+1] = value; // value add correct position
        
    }

    return arr;

}


int main() {
    
    printf("Insertion Sort \n");

    int arr[] = {12,3,45,6,21,89,54,8};

    int length = sizeof(arr)/sizeof(arr[0]);

    int *sorted_arr = insertion_sort(arr,length); 

    for(int i=0; i<length; i++){
        printf("%d ", sorted_arr[i]);
    }
    return 0;
}