#include<iostream>
#include<vector> //leat code problem
#include<climits>
using namespace std;

string ip_address(string str){
    string ans = "";
   
    for(int i=0;i<str.length();i++){
        if(str[i] == '.'){
            ans+="[.]";
        }
        else{
            ans.push_back(str[i]);
        }
    }
    return ans;
}


int main(){
    string str;
    getline(cin,str);
    cout<<ip_address(str);

}