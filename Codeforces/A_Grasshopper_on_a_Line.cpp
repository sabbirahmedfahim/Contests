// alhamduliiah ! accepted !!!
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int x, k; cin >> x >> k;
    if(x % k != 0) 
    {
        cout << 1 << nl;
        cout << x << nl;
    }
    else if(x-1 % k != 0) 
    {
        cout << 2 << nl;
        cout << x-1 << " " << 1 << nl;
    }
    else 
    {
        cout << 3 << nl;
        cout << x-2 << " " << 2 << " " << 1 << nl;
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}