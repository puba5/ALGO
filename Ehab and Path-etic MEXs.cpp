// Codeforces Round #628 (Div. 2)

#include <string>
#include <vector>
#include <queue>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin >> t;
    vector<pair<int, int>> v;
    vector<int> vv[t + 1];
    for (int i = 0; i < t - 1; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
        vv[a].push_back(b);
        vv[b].push_back(a);
    }
    int str = 0;
    int end = t - 2;
    for (int i = 0; i < t - 1; i++) {
        if (vv[v[i].first].size() == 1 || vv[v[i].second].size() == 1) {
            cout << str << '\n';
            str++;
        } else {
            cout << end << '\n';
            end--;
        }
    }

    return 0;
}
