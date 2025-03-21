#include <stdio.h>

int binary_search(int a[],int r,int value){
    int l = 0;
    while (l<r)
    {
        // calculate the mid value
        int mid = (l+r)/2;
        if(a[mid] == value){
            return mid;
        }else if(a[mid] < value){
            l = mid +1;
        }else if (a[mid] > value){
            r = mid;
        }
    }

    return -1;

}

int main(){
    printf("bineary search\n");
    int arr[] = {1,23,34,45,67,80,87,90,94};

    int length = sizeof(arr)/ sizeof(arr[0]);

    int value = binary_search(arr,length,90);
    
    printf("Index %d", value);
    return 0;
}