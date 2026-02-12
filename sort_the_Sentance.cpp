#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

string sort_string(string str){
    vector<string>ans(10);
    stringstream ss(str);
    string word;
    while(ss>>word){
        int pos = word[word.length()-1] - '0';
        word.pop_back();

        ans[pos] = word;

    }
    string result = "";

    for(int i=1;i<ans.size();i++){
        if(ans[i] != ""){
            result = result + ans[i] + " ";
        }
        
    }
    result.pop_back();

    return result;  
}




int main(){

    string s = "is2 sentance4 this1 a3";
    cout<<sort_string(s);

}