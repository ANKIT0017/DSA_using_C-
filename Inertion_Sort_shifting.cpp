// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
vector <int> insertion_sort(vector <int> &arr , int size){
    int comp=0;
    for( int i = 1; i< size; ++i){
        int x= arr[i];
        int y= i-1;
        
        while ( y>=0 && x<arr[y]){
            comp++;
            arr[y+1]=arr[y];
            --y;
        }
        arr[y+1]=x;
    }
    cout << comp<< endl;
    return arr;
}

int main(){
    vector <int> arr = {6,4,5,3,32,1};
    int size= arr.size();
    vector <int> x=insertion_sort(arr,size);
    for (int i:x )
    cout<<i<<" ";
}
