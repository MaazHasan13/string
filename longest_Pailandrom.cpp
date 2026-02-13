#include<iostream>
#include<vector>
using namespace std;

int long_pailendrome(string str){
    vector<int>alpha(26,0);
    //vector<int>alpha2(26,0);
    int  ans = 0;
    bool  isvalue = false;

    for(size_t i=0;i<str.size();i++){
       // int index = 0;
        if(str[i]>='a'&& str[i]<='z'){
        int index = str[i]-'a';          //each word ko coud kiya ...kitni bar aaya
        alpha[index]+=1; 
        }
        // else if(str[i]>='A'&& str[i]<='Z'){
        //     int index2 = str[i]-'A';          //each word ko coud kiya ...kitni bar aaya
        //      alpha2[index2]+=1;
        // }
    }
    for(int i=0;i<26;i++){
        if(alpha[i]%2 == 0){
            ans = ans+alpha[i];         //even no of word ko ans mai unka count store kiya
        }
        else if(alpha[i]!=0){
            alpha[i]-=1;                //odd no of word ko ans mai unka count store kiya
            ans = ans+ alpha[i];
            isvalue = true;
        }
        
    }
    if(isvalue == true ){
        ans = ans+1;
    }

   return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<long_pailendrome(str);

}
