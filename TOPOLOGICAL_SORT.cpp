//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              100
std::vector<ll> adj[MX];
ll vis[MX];
std::vector<ll> rem;
void dfs(ll n){
    vis[n] = 1;
    for(auto v : adj[n]){
        if (vis[v] == 0){
            dfs(v);
        }
    }
    rem.push_back(n);
}

int main()
{
    ll node, edge; cin >> node >> edge;
    for(ll i=0; i<=edge; i++){
        ll u, v; cin >> u >> v;
        adj[u].push_back(v);
    }
    for(ll i=1; i<=node; i++){
        if (vis[i] == 0)
            dfs(i);
    }
    reverse(rem.begin(), rem.end());
    for(auto x : rem) cout << x << " ";
}

/*
::: INPUT :::
5 4
1 2
3 2
2 4
2 5


::: OUTPUT :::
3 1 2 5 4 

*/
