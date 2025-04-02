#include <iostream>
#include < vector>
using namespace std;

int partition(vector <int>& arr, int low , int high){
    int pivot = arr[high];
    int i = low -1;
    for ( int j =low; j<=high-1; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

void QuickSort(vector <int> &arr, int low , int high){
    if (low < high){
        int pi = partition(arr,low,high);
        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,high);
    }
}
int main(){
  vector <int> arr = {7,1,3,2,4,8};
  int s = arr.size();
  QuickSort(arr,0,s-1);
  for( int i : arr){
    cout << i << " ";
  }
  return 0;
}
