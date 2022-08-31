#include <bits/stdc++.h>

#define fu(i, a, b) for (int i = (a); i <= (b); i++)
#define fd(i, a, b) for (int i = (a); i >= b; i--)
#define ll long long
#define ii pair<int, int>
#define X first
#define Y second
#define pb push_back
#define ms(a, val) memset(a,val,sizeof(a))
#define mp make_pair
using namespace std;
const int N = 4e3;
const int MOD = 998244353;

using namespace std;

void home() {
#ifndef ONLINE_JUDGE
    freopen("doc.inp", "r", stdin);
    freopen("doc.out", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool cmp(char a, char b) {
    return a > b;
}

int main() {
    home();
    int n;
    cin >> n;
    char c[100];
    for (int i = 0; i < n; ++i) {
        cin >> c + i;
    }
    sort(c, c + n, cmp);
    cout << c;
    vector<int> vector1;
    vector1.push_back(3);
    vector1.push_back(4);
    vector1.push_back(6);
    vector1.push_back(2);
    vector1[1] = 200;
    cout << endl;
    for (auto &item: vector1) {
        item = item + 1;
        cout << item << endl;
    }
    return 0;
}