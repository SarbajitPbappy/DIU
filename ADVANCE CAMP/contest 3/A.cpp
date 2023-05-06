#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define fr for(int i=0; i<n; i++)
#define pb push_back
#define vi vector<int>v
int main(){
    int n;
    cin>>n;
    vi;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(all(v));
    fr(cout<<v[i]<<" ");
}