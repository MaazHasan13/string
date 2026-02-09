#include<iostream>
#include<vector>
using namespace std;//1832

int pangram(string s){
    vector<bool>alpha(26,0);
    
    for(int i=0;i<s.length();i++){
       int index = s[i] - 'a';
       alpha[index] = 1;          // dono line ka alternate tarika alpha[ s[i]-'a' ] = 1
    }
    for(int i= 0;i<26;i++){
        if(alpha[i]==0){
        return 0;
        }
        
    }

    return 1;
    
}
int main(){

    string s;
    getline(cin,s);
    cout<<pangram(s);



}