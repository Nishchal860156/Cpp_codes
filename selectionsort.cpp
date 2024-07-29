#include<iostream>
using namespace std;
int main(){
    int arr[6]={45,78,23,90,11,23};
    int n=sizeof(arr)/sizeof(int);
    for (int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }
}