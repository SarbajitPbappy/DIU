#include <bits/stdc++.h>
using namespace std;

int main() {
    int dp[100000];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=1;i<100000/2;i++){
        dp[2*i] = dp[i];
        dp[2*i+1] = dp[i] + dp[i+1];
    }
    int n;
    while(cin>>n){
        if(n==0) break;
        int mx=0;
        for(int i=0;i<=n;i++){
        mx = max(mx,dp[i]);
    }
    cout<<mx<<endl;
    }
    
    return 0;
}
