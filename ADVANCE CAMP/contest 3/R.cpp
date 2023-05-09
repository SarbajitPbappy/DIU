#include<bits/stdc++.h>
using namespace std;
const int A=1e5;
int main(){
    int numberOfcards;
    cin>>numberOfcards;
    queue<int>s1;
    queue<int>s2;
    int k1,k2;
    int x;
    cin>>k1;
    while(k1--){
        cin>>x;
        s1.push(x);
    }
    cin>>k2;
    while(k2--){
        cin>>x;
        s2.push(x);
    }
    int win,cnt=0;
    while(1){
        if(s1.empty()){
            win=2;
            break;
        }
        if(s2.empty()){
            win=1;
            break;
        }
        int a=s1.front();
        int b=s2.front();
        s1.pop();
        s2.pop();
        if(a>b){
            s1.push(b);
            s1.push(a);
        }
        else{
            s2.push(a);
            s2.push(b);
        }
        cnt++;
        if(cnt>A){
            win=0;
            break;
        }
    }
    if(win==0) cout<<-1;
    else cout<<cnt<<" "<<win;
}