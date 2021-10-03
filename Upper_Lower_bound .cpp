//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1000000007
#define en              "\n"
#define all(n)          n.begin(), n.end()

int main()
{
   // upper bound 
    ll n;cin >> n;
    std::vector<ll> v(n);for(ll i=0; i<n; i++) cin >> v[i];
    sort(all(v));
    ll q;
    cin >> q;
    ll l = -1, r = n;
    while(l + 1 < r){
        ll mid = l + (r - l) / 2;
        if (v[mid] <= q) l = mid;
        else r = mid;
    }
    cout << r << en;
    return 0;
}
