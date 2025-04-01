#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector <int>& arr){
    int size = arr.size();
    int total_comparisons = 0;
    int total_iterations = 0;
    bool swapped = false;
    for (int i =0 ; i < size-1 ; i++){
        total_iterations++;
        swapped = false;
        for (int j = 0 ; j < size-i-1 ; j++){
              total_iterations++;
              total_comparisons++;
              if (arr[j] > arr[j+1]){
                  swap(arr[j],arr[j+1]);
                  swapped = true;
              }
        }
        if( !swapped){
              break;
        }
    }
    cout<<"Total Comparisons"<<total_comparisons<<endl<<"Total Iterations"<<total_iterations<<endl;
}

int main(){
  vector <int> arr = {1,2,3,4,5,6,5,4,3,2,1};
  bubblesort(arr);
  for(int val : arr){
    cout<<val<<" ";
  }
  cout<<endl;
  return 0;
  
