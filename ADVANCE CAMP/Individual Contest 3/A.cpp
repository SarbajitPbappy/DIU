#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n,k;
    while(cin>>n>>k){
        ll ans;
        ans=n;
        ll x=n;
        while(x>=k){
            ans+=x/k;
            x=x/k+x%k;
        }
        cout<<ans<<endl;
    }
}