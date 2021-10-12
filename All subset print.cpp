//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define en              "\n"
/* Start Your CODE*/
void solve()
{
    ll n;cin >> n;
    std::vector<ll> v(n); for(ll i=0; i<n; i++) cin >> v[i];

    for(ll i=1; i<= (1<<n); i++){
        for(ll j=0; j<n; j++){
            if (i & (1 << j)) cout << v[j] << " ";
        }
        cout << en;
    }
}

int main()
{
    solve();
    return 0;
}
