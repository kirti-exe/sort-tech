#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main(){
    int arr[] = {32,22,9,76,88};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    quickSort(arr, 0, n -1);

    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Time Complexity: O(n log n)"<<endl;
    return 0;
}
