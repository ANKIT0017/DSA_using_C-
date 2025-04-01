#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector <int>& arr){
    int size = arr.size();
    int TotalComparisons = 0;
    int TotalIterations = 0;
    for(int i = 0; i < size-1; i++){
        TotalIterations++;
        int min = i;
        for (int j = i + 1 ; j < size ; j++){
            TotalComparisons++;
            TotalIterations++;
            if( arr[j] < arr[min]){
                min = j;
            }
        swap(arr[min],arr[i]);
        }
    }
    cout<<"Total COmparisons = "<< TotalComparisons << endl <<" TotalIterations = " << TotalIteration << endl;
}

int main(){
  vector <int> arr= {1,2,3,4,5,4,3,2,1};
  selectionSort(arr);
  for (int val : arr){
      cout<<val<<" ";
  return 0;
  }
