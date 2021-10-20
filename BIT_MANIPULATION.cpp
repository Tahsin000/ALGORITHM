#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1000000007
#define db(x)           cout << #x << " : " << x << endl;
#define faster          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define py              cout << "YES\n"
#define pn              cout << "NO\n"
#define all(n)          n.begin(), n.end()
#define pb              push_back
#define sz(n)           n.size()
ll Pow(ll b, ll p){return p==0? 1:b*Pow(b, p-1);}
ll gcd(ll a, ll b) {return(b==0)?a:gcd(b, a%b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}

void INPUT(){
    faster ios_base::sync_with_stdio(false); cin.tie(NULL); 
    #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin); freopen("outputf.in", "w", stdout); 
    #endif
}
void Decimal_To_Binary_Using_Bitwise_operator(ll n){
    vector<ll>v;
    while (n)
    {
        v.pb(n&1);
        n = (n >> 1);
    }
    for(ll i = sz(v)-1; i>=0; i--) cout << v[i] << " ";
}
void GetBit(){
    ll n, pos; cin >> n >> pos;
    bool ans = (n & (1 << pos));
    (ans) ? cout << "1\n" : cout << "0\n";
    cout << (1 << 2) << endl;
}
void SetBit(){
    ll n, pos; cin >> n >> pos;
    ll ans = (n | (1 << pos));
    cout << ans << endl;
}  
void ClearBit(){
    ll n, pos; cin >> n >> pos;
    ll ans = ~(1 << pos);
    cout << (n & ans) << endl;
}
void UpdateBit(){
    ll n, pos, u; cin >> n >> pos >> u;
    ll mask = ~(1 << pos);
    n = n & mask;
    ll ans = n | (u << pos);
    cout << ans << endl;
}

int main()
{
    INPUT();
    UpdateBit();
    // ClearBit();
    // SetBit();
    // GetBit();
    // Decimal_To_Binary_Using_Bitwise_operator(12);
    
    return 0;
}
