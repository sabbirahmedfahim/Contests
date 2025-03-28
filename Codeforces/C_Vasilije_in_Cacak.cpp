#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    ll n, k, x; cin >> n >> k >> x; // 1 ≤ X ≤ 4⋅10^10
    ll mnSum = (k*(k+1))/2;
    ll totalSum = (n*(n+1))/2;
    ll diff = n-k;
    ll mxSum = totalSum - ((diff*(diff+1))/2); 
    if(mnSum > x || mxSum < x) cout << "NO" << nl;
    else cout << "YES" << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}