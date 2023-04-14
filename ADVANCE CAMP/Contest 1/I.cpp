#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int cow;
        cin >> cow;
        cout << "Case " << i << ":" << endl;
        while (cow--)
        {
            int x, y;
            cin >> x >> y;
            if (x > x1 && x < x2 && y > y1 && y < y2)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
}