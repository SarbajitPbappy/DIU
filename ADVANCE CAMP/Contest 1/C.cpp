#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int n;
        cin >> n;
        int total = 0;
        cout<<"Case "<<i<<":"<<endl;
        while(n--){
            string op;
            cin>>op;
            if(op=="donate"){
                int amnt;
                cin >> amnt;
                total += amnt;
            }
            else if(op=="report"){
                cout<<total<<endl;
            }
        }
    }
}