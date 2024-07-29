#include<iostream>
using namespace std;
int find(int arr[],int n){
    int unique=0;
    for (int i=0;i<n;i++){
        unique=unique^arr[i];
    }
    cout<<unique; 
}
int main(){
    int arr[5]={1,2,1,2,4};
    find(arr,5);

    return 0;
}