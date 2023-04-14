#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="hello";
    string str;
    cin >> str;
    int j=0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == s[j]){
            j++;
        }
    }
    if(j==5){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}