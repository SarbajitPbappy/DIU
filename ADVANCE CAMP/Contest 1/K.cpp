#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        int n, p, q;
        cin >> n >> p >> q;
        vector<int> eggs(n);
        for (int j = 0; j < n; j++)
        {
            cin >> eggs[j];
        }
        int count_eggs = 0;
        int weight_eggs = 0;
        for (int j = 0; j < n; j++)
        {
            if (count_eggs < p && weight_eggs + eggs[j] <= q)
            {
                count_eggs++;
                weight_eggs += eggs[j];
            }
            else
            {
                break;
            }
        }
        cout << "Case " << i << ": " << count_eggs << "\n";
    }
}