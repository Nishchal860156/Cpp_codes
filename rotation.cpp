#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size=sizeof(arr)/sizeof(int);
    int k;
    cout<<"Enter the times you want to rotate ";
    cin>>k;
    int f=0;
    int l=size-1;
    while(f<l && f<k){
        int temp=arr[f];
        arr[f]=arr[l];
        arr[l]=temp;
        f++;
        l--;
    }
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}