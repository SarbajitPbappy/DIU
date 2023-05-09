#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        int queueSize, operation;
        deque<int> q;
        cin >> queueSize >> operation;
        cout << "Case " << i << ":\n";
        while (operation--)
        {
            string str;
            cin >> str;
            int x;
            if (str == "pushLeft" || str == "pushRight")
            {
                cin >> x;
                if (q.size() == queueSize)
                {
                    cout << "The queue is full\n";
                }
                else
                {
                    if (str == "pushLeft")
                    {
                        cout << "Pushed in left: " << x << "\n";
                        q.push_front(x);
                    }
                    if (str == "pushRight")
                    {
                        cout << "Pushed in right: " << x << "\n";
                        q.push_back(x);
                    }
                }
            }
            if (str == "popLeft" || str == "popRight")
            {
                if (q.size() == 0)
                {
                    cout << "The queue is empty\n";
                }
                else
                {
                    if (str == "popLeft")
                    {
                        cout << "Popped from left: " << q.front() << "\n";
                        q.pop_front();
                    }
                    if (str == "popRight")
                    {
                        cout << "Popped from right: " << q.back() << "\n";
                        q.pop_back();
                    }
                }
            }
        }
    }
}