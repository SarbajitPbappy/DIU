#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    vector<int>v(k);
    for(int i=0;i<k;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int supporters=0;
    for(int i=0;2*i<k;i++){
        supporters+=(v[i]+2)/2;
    }
    cout<<supporters<<endl;
}