#include<bits/stdc++.h>
using namespace std;
#define MX      5
#define ll      long long

ll BinarySearch(std::vector<ll> v, ll l,ll r, ll s){
   if (l <= r){
         ll mid = l + (r - l) / 2;
        if (v[mid] == s) return 1;
        else if (v[mid] > s){
            BinarySearch (v, l, mid - 1, s);
        }
        else BinarySearch (v, mid + 1, r, s);
   }
   return 0;
}
int main(){
    ll n; cin >> n;
    std::vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    if(BinarySearch(v, 0, n, 10)) cout << "The number was found.\n";
        else cout << "The number was not found.\n";
}