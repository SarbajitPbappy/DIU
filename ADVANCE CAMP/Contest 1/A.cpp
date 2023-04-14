#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int cases = 0;
    while(getline(cin,str)){
        if(str=="*") break;
        cases++;
        cout<<"Case "<<cases<<": ";
        if(str=="Hajj"){
            cout<<"Hajj-e-Akbar"<<endl;
        }
        else if(str=="Umrah"){
            cout<<"Hajj-e-Asghar"<<endl;
        }

    }
}