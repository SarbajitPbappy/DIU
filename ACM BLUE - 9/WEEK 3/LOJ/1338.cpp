#include<bits/stdc++.h>
using namespace std;
string remove(string s){
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    return s;
}
string transfer(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}
bool check(string name1,string name2){
    name1=transfer(remove(name1));
    name2=transfer(remove(name2));
    sort(name1.begin(),name1.end());
    sort(name2.begin(),name2.end());
    return name2.find(name1)!=string::npos;
}
int main(){
    int test;
    cin>>test;
    cin.ignore();
    for(int i=1;i<=test;i++){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        if(check(s1,s2)) cout<<"Case "<<i<<": YES\n";
        else if(check(s2,s1)) cout<<"Case "<<i<<": YES\n";
        else cout<<"Case "<<i<<": NO\n";
    }
}