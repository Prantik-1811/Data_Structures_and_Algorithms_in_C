// Function to Implement Bubble Sort

#include <stdio.h>

void BubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    BubbleSort(arr, n);

    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;

}