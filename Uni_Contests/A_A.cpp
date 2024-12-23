#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    set<ll> s;
    while (t--)
    {
        int cmd; cin >> cmd;
        ll data; cin >> data;
        if(cmd == 1)
        {
            s.insert(data);
        }
        else if(cmd == 2)
        {
            auto it = s.find(data);
            if(it != s.end()) s.erase(data);
        }
        else 
        {
            if(s.count(data)) cout << "Yes" << nl;
            else cout << "No" << nl;
        }
    }
    

    return 0;
}