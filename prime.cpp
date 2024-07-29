#include<iostream>
using namespace std;
bool isprime(int num){
    for(int i=2;i<num;i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout<<"Enter the integer";
    cin>>num;
    cout<<num<<endl;
    if(isprime(num)){
        cout<<num<<" is prime";
    }
    else{
        cout<<num<<" is not prime";
    }
    return 0;
}