#include<iostream>
#include <cmath>
using namespace std;
int digit(int num){
    int power=0;
    while (num>0){
        power++;
        num=num/10;
    }
    return power;
}
bool isARM(int num){
    int power=digit(num);
    int arm_num=num,sum=0;
    while(arm_num>0){
        int digit=arm_num%10;
        sum=sum+pow(digit,power);
        arm_num=arm_num/10;
    }
    return (sum==num);
}
int main(){
    int num=153;
    cout<<isARM(num)<<endl;

    num=122;
    cout<<isARM(num)<<endl;

    return 0;

}
