/*
    بسم الله الرحمن الرحيم
     الجامعة الإسلامية العالمية شيتاغونغ
    لا تحزن ان الله معنا
///////////// IIUC - 49 /////////////
*/ 
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
/* Start Your MAIN*/
int main()
{
    ll n;cin >> n;
    std::vector<ll> v(n);for(ll i=0; i<n; i++)cin >> v[i];

    for(ll i=1; i<(1 << n); i++){
        for(ll j=0; j<n; j++){
            if(i & (1<<j)) cout << v[j] << " ";
        }
        cout << endl;
    }

}
