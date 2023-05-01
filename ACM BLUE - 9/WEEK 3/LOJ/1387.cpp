#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int caseno = 1; caseno <= t; caseno++)
    {
        int n, balance = 0;
        cin >> n;
        cout << "Case " << caseno << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            string op;
            cin >> op;
            if (op == "donate")
            {
                int amount;
                cin >> amount;
                balance += amount;
            }
            else if (op == "report")
            {
                cout << balance << endl;
            }
        }
    }
    return 0;
}