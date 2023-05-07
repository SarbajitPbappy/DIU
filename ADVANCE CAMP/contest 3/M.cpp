#include<bits/stdc++.h>
using namespace std;
bool isCorrect(string s){
    int n = s.length();
    stack<char> st;
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return false;
            if(s[i]==')'){
                if(st.top()!='(') return false;
                st.pop();
            }
            else if(s[i]==']'){
                if(st.top()!='[') return false;
                st.pop();
            }
            else if(s[i]=='}'){
                if(st.top()!='{') return false;
                st.pop();
            }
        }
    }
    if(st.empty()) return true;
    return false;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        if(isCorrect(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
