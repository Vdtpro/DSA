#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
#define file() freopen("Test2.inp", "r", stdin); freopen("Test2.out", "w", stdout);
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pq_min priority_queue<ll, vector<ll>, greater<ll>> 
#define pq_max priority_queue<int> 
#define FORD(i, r, l) for(int i = r; i >= l; i--)
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define For(i, l, r) for(int i = l; i < r; i++)
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
int n, a[100];// lưu cấu hình
bool check; // kiểm tra cấu hình cuối
void ktao()
{
    FOR(i, 1, n) a[i] = 0;
    // khởi tạo cấu hình ban đầu có n phần tử bằng 0
}
void sinh()
{
    // Bắt đầu từ bit cuối cùng, và tìm bit 0 đầu tiên
    int i = n;
    // đi tìm bit đầu tiên = 0 tính từ bên phải
    while(i >= 1 && a[i] == 1) // đảm bảo việc duyệt từ bit 1 đến bit n
    {
        a[i] = 0; // gán giá trị bằng 0
        i--; // dịch sang trái
    }
    if(i == 0) check = 0; // cau hinh cuoi cung
    else a[i] = 1;
}
void solve()
{
    cin >> n;
    check = 1;
    ktao();
    while(check)
    {
        FOR(i, 1, n) cout << a[i]; // in ra cấu hình hiện tại
        cout << endl;
        sinh();
    }
}
signed main()
{
    file();
    faster();
    solve();
}