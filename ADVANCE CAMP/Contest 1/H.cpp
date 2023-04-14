#include <bits/stdc++.h>
using namespace std;
int main()
{
    string decode = "";
    string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string s;

    while (getline(cin, s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
                decode += ' ';
            else
            {
                int index = keyboard.find(s[i]);
                decode += keyboard[index - 1];
            }
        }
        decode+="\n";
        cout << decode;
        decode="";
    }
}