#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector <int>& arr) {
    int size = arr.size();
    int totalComparisons = 0;
    int totalIterations = 0;
    for (int i = 1; i < size; i++){
        totalIterations++;
        int key = arr[i];
        int j = i-1;
        while ( arr[j] > key && j>=0 ){
            totalComparisons++;
            arr[j+1] = arr[j];
            j--;
        arr[j+1] = key;
        }
    }
    cout << "TOtal comaprisons = " << totalComparisons << endl << "totalIterations = " << totalIterations << endl;
}

int main(){
  vector <int> arr = {1,2,3,4,5,6,7,65,4,3,2};
  insertionSort(arr);
  for (int val : arr){
      cout << val << " ";
  }
  cout << endl;
  return 0;
}
