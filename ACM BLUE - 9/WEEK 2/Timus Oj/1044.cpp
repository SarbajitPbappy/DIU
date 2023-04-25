#include<bits/stdc++.h>
using namespace std;

int n, cnt[37];

void countLucky(int N, int sum){
    if(N==n/2) ++cnt[sum];
    else{
        for(int i=0; i<10; i++){
            countLucky(N+1, sum+i);
        }
    }
}

int main(){
    cin >> n;
    countLucky(0, 0);
    int ans = 0;
    for(int i=0; i<=36; i++){
        ans += cnt[i]*cnt[i];
    }
    cout << ans << endl;
    return 0;
}
