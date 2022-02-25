#include<bits/stdc++.h>
using namespace std;
#define MX      5
#define ll      long long

ll LinerSearch(std::vector<ll> v, ll n){
    for(auto x : v){
        if (x == n) return true; 
    }
    return false;
}
int main(){
    ll n; cin >> n;
    std::vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    if(LinerSearch(v, 10)) cout << "The number was found.\n";
        else cout << "The number was not found.\n";
}