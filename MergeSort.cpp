#include <iostream>
#include <vector>
using namespace std;

int merge(vector <int> &arr,int low,int mid, int high, int &con){
    int n1= high - mid+1;
    int n2 = high-mid;
    vector <int> L(n1) ,R(n2);
    for(int i=0; i<n1; i++){
        L[i]= arr[low + i];
    }
    for (int i=0; i < n2; i++){
        R[i]= arr[mid +i +1];
    }
    int i=0, j=0, k= low;
    while (i < n1 && j < n2){
        con++;
        if ( L[i] < R[j]){
            arr[k]=L[i];
            i++;
            
        }
        else{
            arr[k]=R[j];
            j++;
            
        }
        k++;
    }
    while(i< n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
    return con;
}

void MergeSort(vector <int> &arr, int low, int high, int &con){
    if (low < high){
        int mid = low +  (high - low)/2;
        MergeSort(arr,low,mid,con);
        MergeSort(arr,mid+1,high,con);
        merge(arr,low,mid,high,con);
    }
}

void print(vector <int> &arr){
    for( int i : arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
  vector <int> arr={1,2,3,4,5,3,32,1,3,43,657,67,5,64,2};
  int s=0;
  MergeSort(arr,0,arr.size()-1,s);
  print(arr);
  cout << "total number of computations done --" << s;
  
  return 0;
}
