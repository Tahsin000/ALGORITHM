#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              110
vector<ll>grap[MX];
ll dis[MX];
ll vis[MX];
void BFS(ll source){
    dis[source] = 0;
    vis[source] = 1;
    queue<ll>Q;
    Q.push(source);
    while(!Q.empty()){
        ll node = Q.front();
        Q.pop();
        for(ll i=0; i<grap[node].size(); i++){
            ll next = grap[node][i];
            if (vis[next] == 0){
                vis[next] = 1;
                dis[next] = dis[node] + 1;
                Q.push(next);
            }
        }
    }

}

int main()
{
    ll node , edge;
    cin >> node >> edge;
    for(ll i=1; i<=edge; i++){
        ll u , v;
        cin >> u >> v;
        grap[u].push_back(v);
        grap[v].push_back(u);
    }
    ll source;
    cout << "Enter your source node : "; cin >> source;
    BFS(source);
    for(ll i=1; i<=node; i++) cout << "Distance of " << i << " is " << dis[i] << endl;
    return 0;
}
/*
        ** input **
        7 9
        1 2
        1 3
        1 7
        2 3
        3 7
        2 4
        4 5
        3 6
        5 6
        1
        
        ** output **
        0
        1
        1
        2
        3
        2
        1

*/