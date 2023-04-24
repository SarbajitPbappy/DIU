#include<bits/stdc++.h>
using namespace std;
const int MAXN = 10;
int n,m;
int a[MAXN+5][MAXN+5];
int dp[MAXN+5][MAXN+5];
int maxSUM(int i,int j){
    if(i<1 || j<1 || i>n || j>m) return INT_MIN;
    if(i==1 && j==1) return a[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=a[i][j]+max(maxSUM(i-1,j),maxSUM(i,j-1));
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    cout<<maxSUM(n,m)<<endl;
    return 0;
}
