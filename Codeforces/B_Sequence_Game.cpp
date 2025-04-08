#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;

    vector<int> res;

    res.push_back(a[0]);

    for (int i = 1; i < n; i++)
    {
        if(a[i-1] > a[i])
        {
            res.push_back(a[i]);
            res.push_back(a[i]);
        }
        else res.push_back(a[i]);
    }

    cout << res.size() << nl;
    print(res);
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