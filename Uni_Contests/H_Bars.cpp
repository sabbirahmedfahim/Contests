#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int target, n; cin >> target >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;

    for (int mask = 0; mask < (1<<n); mask++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if((mask>>i) & 1) sum += a[i];
        }
        if(sum == target)
        {
            cout << "YES" << nl; return;
        }
    }
    cout << "NO" << nl;
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