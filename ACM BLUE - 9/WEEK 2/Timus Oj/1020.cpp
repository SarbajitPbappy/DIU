#include<bits/stdc++.h>
using namespace std;
int main() {
    int nails;
    double radius;
    cin >> nails >> radius;
    double result = 0;
    vector<pair<double, double>> v;
    for(int i = 0; i < nails; i++) {
        double x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    for(int i = 0; i < nails; i++) {
        double x1 = v[i].first;
        double y1 = v[i].second;
        double x2 = v[(i+1) % nails].first;
        double y2 = v[(i+1) % nails].second;
        result += sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    }
    result += 2 * radius * 3.1415926;
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}