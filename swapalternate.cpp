#include<iostream>
using namespace std;
void swapalter(int arr[],int n){
    for (int i=0;i<n;i=i+2){
        if (i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[6]={1,2,3,4,5,6};
    
    swapalter(arr1, 5);
    swapalter(arr2, 6);
    
    printArray(arr1,5);
    printArray(arr2,6);
    return 0;
}