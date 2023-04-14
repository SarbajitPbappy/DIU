#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a,b,c;
    while(cin>>a>>b>>c){
        if(a==0 && b==0 && c==0) break;
        vector<int>s(3);
        s[0]=a;
        s[1]=b;
        s[2]=c;
        sort(s.begin(),s.end());
        if(s[0]*s[0]+s[1]*s[1]==s[2]*s[2]) cout<<"right\n";
        else cout<<"wrong\n";
    }
}