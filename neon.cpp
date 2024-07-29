#include<iostream>
using namespace std;
int neon(int num){
    int sqr=num*num;
    
    int sum_digit=0;
    while(sqr!=0){
        sum_digit=sum_digit + sqr%10;
        sqr=sqr/10;    
    }
    return sum_digit==num;
}
int main(){
    for (int i = 1; i <= 10000; i++) 

    
        if (neon(i))
            cout << i << " ";
}