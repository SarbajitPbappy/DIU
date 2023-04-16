#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int search(vector<ll>&a,ll n,ll x){
    n=a.size();
    for(ll i=0;i<n;i++){
        if(i+1==x){
            return a[i];
        }
    }
    return -1;
}
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>list;
    for(ll i=1;i<=n;i+=2){
        list.push_back(i);
    }
    for(ll i=2; i<=n; i+=2){
        list.push_back(i);
    }
    cout<<search(list,n,k)<<"\n";
    return 0;
}