#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
      int minIndex = i;

      for(int j=i+1; j<n; j++){
        if(arr[j] < arr[minIndex]){
          minIndex = j;
        }
      }

      if(minIndex != i){
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
      }
    }
}


int main(){
    int arr[] = {5,2,4,8,11,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    SelectionSort(arr, n);

    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
