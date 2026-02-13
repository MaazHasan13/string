#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

bool isvowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}
string sort_vowel(string s){
    vector<char>ans;
    vector<int>index;

    for(size_t i=0;i<s.length();i++){
        if(isvowel(s[i])){
            ans.push_back(s[i]);
            index.push_back(i);
        }
    }

    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++){
        s[index[i]] = ans[i];
    }

    return s;
  
}
int main(){
    string str("leetcode");
    cout<<sort_vowel(str);
}