#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(int);
    int arr2[size];
    for (int i=0;i<size;i++){
        //i+j=n-1(size-1)
        arr2[i]=arr[size-1-i];
    }
    for (int j=0;j<size;j++){
        cout<<arr2[j]<<endl;
    }
}
