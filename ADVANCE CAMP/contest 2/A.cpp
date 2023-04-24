#include<bits/stdc++.h>
using namespace std;
void print1toN(int n,vector<int>&dp){
    if(n==0){
        return;
    }
    if(dp[n]==0){
        print1toN(n-1,dp);
        dp[n]=n;
    }
    cout<<dp[n]<<"\n";
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    print1toN(n,dp);
    return 0;
}