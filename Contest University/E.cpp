#include<bits/stdc++.h>
using namespace std;
#define s string
#define gets(s) getline(cin,s)
int main(){
    s str;
    gets(str);
    int cnt=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            cnt++;
        }
    }
    cout<<cnt+1<<endl;
}