#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout<<" ";
        }
        for (int k = 0; k < i * 2 - 1; k++) {
            if (i % 2 == 0) {
                cout<<"<";
            }
            else {
                cout<<"<";
            }
        }
        cout<<endl;
        
        for (int i = 1; i <= n - 1; i++) {
            for (int j = 0; j < i; j++) {
                cout<<" ";
            }
            for (int k = (n - i) * 2 - 1; k > 0; k--) {
                if (i % 2 == 0) {
                    cout<<"<";
                }
                else {
                   cout<<">";
                }
            }
            cout<<endl;
        }
    }
    
    return 0;
}
