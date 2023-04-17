#include<bits/stdc++.h>
using namespace std;
int main(){
    long long MAX_N =164000;
    bool isPrime[MAX_N];
    int ans[15000],size;
    memset(isPrime,true,sizeof(isPrime));
    isPrime[0]=isPrime[1]=false;
    ans[0]=2,size=1;
    for(int i=3;i<MAX_N && size<15000;i+=2){
        if(isPrime[i]){
            ans[size++]=i;
            if(i<MAX_N/i){
                for(int j=i*i;j<MAX_N;j+=i){
                    isPrime[j]=false;
                }
            }
        }
    }
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        cout<<ans[n-1]<<endl;
    }
}