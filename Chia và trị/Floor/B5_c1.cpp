#include<bits/stdc++.h>
#define fr(i, l, r) for(int i = l; i < r; i++)
#define fr1(i, r, l) for(int i = r; i >= l; i--)
#define pr pair<int, int>
#define vt vector<int> 
#define fi first
#define se second
using namespace std;
using ll = long long;
const ll LINF= 1e18 + 5;
const int ING = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int a[MAX], n, k;
ll s = 0;
void input()
{
    cin >> n >> k;
    fr(i, 0, n) cin >> a[i];
}
void dac()
{
    fr(i, 0, n)
    {
        auto it = upper_bound(a + i, a + n, k);
        if(a[it - a - 1] == 0) cout << -1;
        else cout << a[it - a - 1];
        return;
    }
}
signed main()
{
    // freopen("Test1.inp", "r", stdin);
    // freopen("Test1.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    dac();
}