#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pq priority_queue
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll a[n];
        ll b[m];
        ll sum = 0;
        pq <int, vector<int>, greater<int>> p;

        for(int i=0;i<n;i++){
        cin>>a[i];
        p.push(a[i]);
        }
        ll bsum=0;
        for(int i=0;i<m;i++){
        cin>>b[i];
        }
       for(int i=0; i<m; i++) {      
        p.pop();
        p.push(b[i]);      
    }
 
    while(!p.empty()) {      
        sum+=p.top();
        p.pop();
    }
    cout<<sum<<endl;
    }
}