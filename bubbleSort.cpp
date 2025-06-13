#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    bool swapped;

    for(int i=0; i<n-1; i++){
      swapped = false;

      for(int j=0; j<n-i-1; j++){
        if(arr[j] > arr[j+1]){
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;

          swapped = true;
        }
      }

      if(!swapped){
        break;
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

    BubbleSort(arr, n);

    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
