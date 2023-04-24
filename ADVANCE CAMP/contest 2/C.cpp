#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool canREACH(ll start,ll n){
    if(start==n){
        return true;
    }
    if(start>n){
        return false;
    }
    return canREACH(start*10,n)||canREACH(start*20,n);

}
int main(){
    int test;
    cin >> test;
    while(test--){
        ll n;
        cin >> n;
        if(canREACH(1,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}