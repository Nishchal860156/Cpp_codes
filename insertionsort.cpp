#include<iostream>
using namespace std;
int insertion(int arr,int n){
    for (int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for (int j=i-1;j>=0;j--){
            if (arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr={2,4,6,8,12,18};
    int array=insertion(arr,6);
    cout<<"the sorted array is:"<<array<<endl;
}