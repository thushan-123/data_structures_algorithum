#include <stdio.h>



int linear_search(int arr[], int length, int value){
    int iteration = 0;
    while(iteration < length){
        
        if(arr[iteration] == value){
            return iteration;
        }
        iteration +=1;
    }

    return -1;
}

int main(){
    int arr[] = {1,2,56,45,34,78,32,78};
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Linear Search \n Index : %d \n", linear_search(arr,length,78));
    return 0;
}