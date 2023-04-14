#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int test;
    cin>>test;
    while(test--){
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"="<<endl;
        }
        else if(a>b){
            cout<<">"<<endl;
        }
        else{
            cout<<"<"<<endl;
        }
    }
}