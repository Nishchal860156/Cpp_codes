#include<iostream>
#include<algorithm>

using namespace std;
int triplet(int arr[],int size,int target){
    std::sort(arr,arr+size);
    cout<<arr;
    for(int i=0;i<size;i++){
        int left=i+1;
        int right=size-1;
        while (left<right){
            if (arr[left]+arr[i]+arr[right]<target){
                left=left+1;
            }
            else if (arr[left]+arr[i]+arr[right]>target){
                right=right-1;
            }
            else{
            }
        }   
    }
}


int main(){ 
}