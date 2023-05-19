#include <bits/stdc++.h>
#define endl '\n'
#define c(x) cin>>x
#define cu(n) cout<<n<<endl;
#define ll long long int
#define pb push_back
using namespace std;
ll sum(ll l,ll r){
    if(l>r){
        swap(l,r);
    }
    ll n=r-l+1;
    ll s=n*(r+l)/2;
    return s;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    c(test);
    while(test--){
        ll x,y;
        c(x);c(y);
        cu(sum(x,y));
    }
    return 0;
}