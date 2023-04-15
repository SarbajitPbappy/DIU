#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll p;
    while(cin>>p){
        if(p<0){
            break;
        }
        cout<<(p*p+p+2)/2<<"\n";
    }
}