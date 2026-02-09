#include<iostream>
using namespace std;

string rotate_clock_wise(string str){
    char c = str[str.length()-1];// last char we stored....okey
    int index = str.length()-2; //now our index is at sencond last box 
    while(index>=0){
        str[index+1] = str[index];
        index--;
    }
    str[0] = c;

    return str;
    
}

string rotate_anticlock_wise(string str){
    char c = str[0];
    int index = 1;
    while(index<str.length()){
        str[index-1] = str[index];
        index++;
    }
    str[str.length()-1] = c;
    return str;
}
int main(){
    string s;
    getline(cin,s);
    cout<<rotate_clock_wise(s);

}