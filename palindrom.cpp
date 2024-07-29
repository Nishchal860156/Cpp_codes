#include<iostream>
using namespace std;
int palindrom(int num){
    int n=num;
    int rev=0;
    while (num>0){
        rev=rev*10+num%10;
        num=num/10;
    }
    return rev;
    
}
int main(){
    int num,rev,n;
    cout<<"Enter the number";
    cin>>num;
    cout<<palindrom(num);
    cout<<n;
    if (n==rev){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}