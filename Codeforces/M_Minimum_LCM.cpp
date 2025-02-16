// solution
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    int a = 1;
    for (int i = 2; i*i <= n; i++)
    {
        if(n % i == 0) 
        {
            a = n/i; break;
        }
    }
    
    cout << a << " " << n - a << nl;
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