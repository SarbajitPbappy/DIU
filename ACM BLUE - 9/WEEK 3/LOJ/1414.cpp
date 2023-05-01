#include <bits/stdc++.h>
using namespace std;
int main()
{

    int test_case;
    cin >> test_case;
    string start_month, end_month;
    char comma;
    int start_date, end_date, start_year, end_year;
    for (int i = 1; i <= test_case; i++)
    {
        cin >> start_month >> start_date >> comma >> start_year;
        cin >> end_month >> end_date >> comma >> end_year;
        if (start_month == "January" or start_month == "February") start_year = start_year;
        else start_year++;

        if (end_month == "January" or (end_month == "February" and end_date < 29)) end_year--;
        else end_year = end_year;

        int mul_of_4 = end_year / 4 - (start_year - 1) / 4;
        int mul_of_400 = end_year / 400 - (start_year - 1) / 400;
        int mul_of_100 = end_year / 100 - (start_year - 1) / 100;

        int total = mul_of_4 + mul_of_400 - mul_of_100;
        cout << "Case "<<i<<": "<<total << endl;
    }
}