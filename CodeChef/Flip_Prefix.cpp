// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    int zero = 0, one = 0;

    ll res = 0, cnt = 1;
    for(auto e : s)
    {
        if(e == '0') zero++;
        else one++;

        if(zero == one) 
        {
            res += cnt;
            cnt++;
        }
    }

    cout << res + 1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}