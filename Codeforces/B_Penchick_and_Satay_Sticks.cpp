#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n), v2;
    for(auto &data : v) cin >> data;

    for (int i = 1; i <= n; i++) v2.push_back(i);
    for (int i = 0; i < n-1; i++)
    {
        if(v[i] > v[i+1] && abs(v[i]-v[i+1]) == 1) swap(v[i], v[i+1]);
    }
    
    cout << ((v == v2)? "YES" : "NO") << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}