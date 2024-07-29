#include<iostream>
using namespace std;
int main(){
    int arr[]={11,45,67,4,89,43,105,91,34};
    int size=sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=1;i<size;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"maximum element in array: "<<max;
}