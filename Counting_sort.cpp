//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1000000007
#define all(n)          n.begin(), n.end()
#define sz(n)           n.size()
#define en              "\n"

ll f[1100000], Narr[1100000];
void Counting_sort(std::vector<ll> &v){
    for(ll i=0; i<sz(v); i++) f[v[i]]++;
    // ll tmp = f[0];
    for(ll i=1; i<=*max_element(all(v)); i++){
        f[i] = f[i-1] + f[i];
    }
    for(ll i=0; i<sz(v); i++){
        ll rem = v[i];
        Narr[f[rem]] = rem;
        f[v[i]]--; 
    }
}

int main()
{
    ll n;
    cin >> n;
    std::vector<ll> v(n); for(ll i=0; i<n;i++) cin >> v[i];
    Counting_sort(v);
    for(ll i=1; i<=n; i++) cout << Narr[i] << " ";
    cout << en;
    return 0;
}
