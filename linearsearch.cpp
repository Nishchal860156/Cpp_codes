#include<iostream>
using namespace std;
int main(){
    int arr[]={0,19,21,32,43,89,47,57,9,10};
    int size=sizeof(arr)/sizeof(int);
    int x;
    cout<<"Enter the element to search: \n";
    cin>>x;
    bool flag=false;
    int i;
    for (i;i<size;i++){
        if (x==arr[i]){
            flag=true;
            break;
        }
    }
    if (flag==true){
        cout<<x<<" is present at "<<i; 
    }
    else{
        cout<<x<<" is not present";
    }
}