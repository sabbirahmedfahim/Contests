#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    input(v);
    sort(v.begin(), v.end());
    if(v[0] == v.back()) cout << "NO" << nl;
    else 
    {
        cout << "YES" << nl;
        cout << v[0] << " ";
        for (int i = n-1; i >= 1; i--)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}