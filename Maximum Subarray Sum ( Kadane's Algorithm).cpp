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

    ll sum = 0; ll mx = INT_MIN;
    for(ll i=0; i<n; i++){
        sum += v[i];
        mx = max(mx, sum);
        if(sum < 0) sum = 0;
    }
    cout << mx << en;
}

int main()
{
    solve();
    return 0;
}
