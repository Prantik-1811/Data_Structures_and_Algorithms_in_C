// Function to Implement Insertion Sort

#include <stdio.h>

void InsertionSort(int arr[], int n){
    int i, j, v;
    for(int i=1;i<n;i++){
        v = arr[i];
        j=i;
        while(arr[j-1]>v && j>=1){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = v;
    }
}

int main(){
    int n;
    printf("Enter the Number of Values you would like to enter: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    InsertionSort(arr, n);

    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;

}