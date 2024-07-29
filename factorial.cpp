#include<iostream>
using namespace std;
int factorial(int num){
    
    if (num==0 || num==1){
        return 1;
    }
    else{
        int fact=1;
        for(int i=1;i<=num;i++){
            fact=fact*i;
        }
        return fact;
    }
}

int main(){
    int num;
    cout<<"enter the number to find its factorial ";
    cin>>num;
    cout<<"factorial of "<<num<<" is "<<factorial(num)<<endl;
    return 0;

}
