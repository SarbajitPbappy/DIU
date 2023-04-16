#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> reminder;
int main()
{
    ll n;
    while (cin >> n)
    {
        if (n < 0)
            break;
        if(n==0){ 
            cout<<"0\n";
            continue;
        }
        while(n!=0){
        reminder.push_back(n % 3);
        n /= 3;
        }
        reverse(reminder.begin(), reminder.end());
        for(ll i = 0; i < reminder.size();i++){
            cout<<reminder[i];
        }
        cout<<endl;
        reminder.clear();
    }
}