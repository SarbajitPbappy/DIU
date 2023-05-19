#include <bits/stdc++.h>
#define endl '\n'
#define c(x) cin>>x
#define cu(n) cout<<n<<endl;
#define ll long long int
const int M=1e5+5;
#define vl vector<ll>
#define pb push_back
using namespace std;

int main() {
    int test;
    c(test);
    while (test--) {
        int x;
        c(x);
        vl a;
        for (int i = 0; i < x; i++) {
            int y;
            c(y);
            a.pb(y);
        }
        
        int total = 0;
        for (int i = 0; i < x; i++) {
            total += a[i];
        }
        
        int lSum = 0;
        for (int i = 0; i < x; i++) {
            int rSum = total - lSum - a[i];
            if (lSum == rSum) {
                cu(i);
                break;
            } else if (lSum != rSum && i == x - 1) {
                cu(-1);
            }
            lSum += a[i];
        }
    }
    
    return 0;
}
