#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              120
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
    freopen("inputf.in", "r+", stdin); freopen("outputf.in", "w+", stdout);
    #endif
}
vector<ll>graph[MX];
ll dis[MX];
ll vis[MX];

void DFS(ll n){
    vis[n] = 1;
    for(ll i=0; i<graph[n].size(); i++){
        ll next = graph[n][i];
        if (vis[next] == 0){
            DFS(next);
        }
    }
}

int main()
{
    INPUT();
    ll node, edge;
    cin >> node >> edge;
    for(ll i=1; i<= edge; i++){
        ll u, v;
        cin >> u >>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    ll start ;
    cin >> start;

    memset(vis, 0, MX);
    DFS(start);
    for(ll i=0; i<node; i++){
        if (vis[i] == 1) cout << "Notes " << i << " is visites\n";
        else cout << "Notes " << i << " is not visites\n";
    }

/**

DFS input
5 4
0 1
1 2
1 3
3 4
0

output
Notes 0 is visites
Notes 1 is visites
Notes 2 is visites
Notes 3 is visites
Notes 4 is visites

**/
    return 0;
}

