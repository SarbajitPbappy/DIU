#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int lies;
        cin>>lies;
        vector<int>v={2};
        for(int j=0;j<lies;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int a=0;
        for(int j=1;j<v.size();j++){
           a+=(v[j]-v[j-1]+4)/5;
        }
        cout<<"Case "<<i<<": "<<a<<endl;
    }
}