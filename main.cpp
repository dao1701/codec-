#include <bits/stdc++.h>

#define link "https://bigocoder.com/contests/51/problems/69?problem_view=submissions";
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
const int N = 2e5;
const int MOD = 998244353;

void tinh();

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

int a[N];

int main() {
    home();
    int n;
    cin >> n;
    ms(a, 0);
    for (int i = 0; i < n; ++i) {
        tinh();
    }
    int kq = 0;
    for (int i = 0; i < N; ++i) {
        kq += a[i] / 2;
    }
    cout << kq;
    return 0;
}

void tinh() {
    string s;
    cin >> s;
    int kq = 0;
    unsigned long long int size = s.length() - 1;
    fu(i, 0, size) {
        kq += (s[i] == 'c' || s[i] == 'o' || s[i] == 'v' || s[i] == 'i' || s[i] == 'd');
    }
    a[kq]++;
}
