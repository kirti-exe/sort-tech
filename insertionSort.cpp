#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
      int key = arr[i];
      int j = i -1;

      while(j >=0 && arr[j] >= key){
        arr[j+1] = arr[j];
        j--;
      }

      arr[j+1] = key;
    }
}

int main(){
    int arr[] = {5,2,4,8,11,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    InsertionSort(arr, n);

    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
