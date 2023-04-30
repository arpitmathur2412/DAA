#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>=0;j--){
            if(arr[j]<arr[j-1]){
                swap(&arr[j],&arr[j-1]);
            }
            else break;
        }
    }
}

int main() {
    
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    
    for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("Sorted array:\n");
    insertionSort(arr, n);

    for(int i = 0; i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
    
    return 0;
}