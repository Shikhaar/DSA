#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

void Swap(int arr[], int size){
    for(int i = 0; i< size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int even[8]= {25,4,3,89,62,7,1,69};
    int odd[5] = {4,6,3,8,7};
    printArray(even, 8);
    Swap(even, 8);
    printArray(even, 8);

    return 0;
}