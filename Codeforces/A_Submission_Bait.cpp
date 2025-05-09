#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    deque<int> dq(n); for(auto &e : dq) cin >> e;
    sort(all(dq)); reverse(all(dq));

    while (dq.size() > 1)
    {
        if(dq[0] == dq[1])
        {
            dq.pop_front();
            dq.pop_front();
        }
        else break;
    }

    // cout << dq.size() << nl;
    if(dq.empty()) cout << "NO" << nl;
    else cout << "YES" << nl;
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