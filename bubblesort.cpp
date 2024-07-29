#include<iostream>
using namespace std;
int main(){
    int arr[6]={45,78,23,90,11,23};
    int n=sizeof(arr)/sizeof(int);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    for(int i=0;i<n-1;i++){ //rounds
        for (int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            } 
        }
    }
    cout<<"\nsorted array:"<<endl;
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}