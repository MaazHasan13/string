#include<iostream>
#include<vector>
using namespace std;

string sorting(string str,int n){

    for(int i=0;i<str.length()-1;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]>str[j]){
                swap(str[i],str[j]);
            }
        }
    }
    return str;
}

string sorting_(string str,int n){
    vector <int>alpha(26,0);
    for(int i=0;i<str.length();i++){
        int index = str[i]-'a';
        alpha[index]++;                  // tak hamne alphabats ko count ker liya
    }
    string ans ="" ;
    for(int i=0;i<26;i++){
        char c = 'a'+i;
        while(alpha[i]){
            ans = ans +c;
             alpha[i]--;
        }
       
    }
    return ans;
}

int  main(){

    string str = "edcab";
    cout<<sorting_(str,5);

}