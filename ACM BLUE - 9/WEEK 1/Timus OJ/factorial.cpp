#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k=0;
    cin >> n;
    char c;
    while(true){
        c=getc(stdin);
        if(c=='\n'){
            break;
        }
        if(c=='!'){
            k++;
        }
    }
    int ans=1;
    while(n>0){
        ans*=n;
        n-=k;
    }
    cout<<ans<<endl;
}