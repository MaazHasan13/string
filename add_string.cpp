#include<iostream>
using namespace std;

string add_string(string num1,string num2){
    string ans;
    int index1 = num1.size()-1 , index2 = num2.size()-1;
    int carry = 0,sum;
    while(index2 >= 0){
        sum = (num1[index1]-'0')+(num2[index2]-'0') + carry;
        carry = sum/10;
        char c = '0' + sum%10;
        ans+=c;
        index1--,index2--;
    } 

    while(index1>=0){
        sum = num1[index1 - '0'] + carry;
        carry = sum/10;
        char c = '0'+ sum%10;
        ans+=c;
        index1--;
        
    }
}

int main(){

}