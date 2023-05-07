#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define m map<int,int>
int main(){
    int n;
    v a;
    m b;
    while(cin>>n){
        if(b.count(n)==0){
            b[n]=1;
            a.push_back(n);
        }
        else{
            b[n]++;
        }
    }
    for(int i=0;i<(int)a.size();i++){
        cout<<a[i]<<" "<<b[a[i]]<<endl;
    }
    
}