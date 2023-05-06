#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    string s;
    int x;
    map<string, int> mp;
    cin.ignore();
    for (int i = 0; i < m; i++)
    {
        cin >> s >> x;
        mp[s] = x;
    }
    unsigned long long int sum = 0;
    while (n--)
    {
        while(getline(cin,s)&&s!=".")
        {
            stringstream ss(s);
            while (ss >> s)
            {
                if (mp.find(s) != mp.end())
                {
                    sum += mp[s];
                }
            }
        }
        cout << sum << endl;
        sum = 0;
    }
}