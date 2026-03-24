#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define gcd(a,b) __gcd(a,b)
#define all(x) x.begin(),x.end()
#define MAX(v) *max_element(v.begin(),v.end())
#define MIN(v) *min_element(v.begin(),v.end())
#define sz(v) int((v).size())
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define FORR(i,a,b) for (int i = a; i <= b; i++)
#define veci vector<int>
#define vecs vector<string>
#define vecc vector<char>
#define st set<int>
#define mst multiset<int>
#define int long long
#define str string
using namespace std;

const int MOD = 1e9 + 7;

/* Yankey */

void _() {
    int n, tip;
    cin >> n >> tip;
    int c;
    if (tip == 1) {
        cin >> c;
    }
    int a[8][8];

    int sum = 0;
    FOR(i, 0, n) {
        FOR(j, 0, n) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }
    if (tip == 1) {
        cout << "1 " << c;
    } else if (tip ==2) {
        if (sum == 1) {
            int cnt = 0;
            FOR(i, 0, n) {
                FOR(j, 0, n) {
                    cnt++;
                    if (a[i][j] == 1) {
                        cout << cnt;
                    }
                }
            }
        } else {
            int cnt = 0;
            FOR(i, 0, n) {
                FOR(j, 0, n) {
                    cnt++;
                    if (a[i][j] == 0) {
                        cout << cnt;
                    }
                }
            }
        }
    }
}

signed main() {
    fastio;

    int t = 1;
    //cin >> t;
    while (t--) {
        _();
    }
}
