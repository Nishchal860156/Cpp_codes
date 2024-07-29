#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int size=sizeof(arr)/sizeof(int);
    int n;
    cout<<"Enter the desired sum: ";
    cin>>n;
    for (int i=0;i<size;i++){
        for (int j=1;j<size;j++){
            if (arr[i]+arr[j]==n){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                break;
            }
        }
    }
}