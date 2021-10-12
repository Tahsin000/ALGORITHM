/*
    بسم الله الرحمن الرحيم
     الجامعة الإسلامية العالمية شيتاغونغ
    لا تحزن ان الله معنا
///////////// IIUC - 49 /////////////
*/ 
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
/* Start Your FUN*/
std::vector<ll> sumV;
/* Start Your FUN*/
void prefixSUM(ll n ,std::vector<ll> v)
{
    sumV.assign(n , 0);
    sumV[0] = v[0];
    for(ll i=1; i<n; i++){
        sumV[i] = sumV[i-1] + v[i];
    }
    // cout << sumSV[5]<< endl;
}
/* Start Your CODE*/
void solve()
{
}   
/* Start Your MAIN*/
int main()
{
    
    ll n;cin >> n;
    std::vector<ll> v(n); for(auto &x:v) cin >> x;
    prefixSUM(n , v);
    for(ll i=0; i<n; i++) cout << i+1 << " positive sum = " << sumV[i] << "\n";

}
