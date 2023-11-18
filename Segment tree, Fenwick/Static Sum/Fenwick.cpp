#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
#define file() freopen("Test2.inp", "r", stdin); freopen("Test2.out", "w", stdout);
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pq_min priority_queue<int, vector<int>, greater<int>> 
#define pq_max priority_queue<int> 
#define FORD(i, r, l) for(int i = r; i >= l; i--)
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define all(x) x.begin(), x.end()
#define pr pair<int, int>
#define prr pair<int, pr> 
#define fi first 
#define se second
#define sze size()
#define endl '\n'
const ll LINF= 1e18 + 5;
const int ING = 1e9 + 5;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
ll a[MAX], BIT[MAX];
int n, q;
// tong tu pos -> n
void update(int pos, ll val)
{
    for(; pos <= n; pos += pos & (-pos))
    {
        BIT[pos] += val;
    }
}
// tong tu 1 -> pos
ll query(int pos)
{
    ll sum = 0;
    for(; pos > 0; pos -= pos & (-pos))
    {
        sum += BIT[pos];
    }
    return sum;
}
void input()
{
    cin >> n >> q;
    FOR(i, 1, n) 
    {
        cin >> a[i];
        update(i, a[i]);
    }
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << query(r) - query(l - 1) << endl;
    }
}
signed main()
{
    // file();
    faster();
    input();
}
