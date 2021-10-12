//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long

ll mx;
void Counting_sort(ll A[],ll B[],ll n)    
{
    ll f[mx+1],t;
    for(ll i=0;i<=mx;i++) f[i] = 0;

    for(ll i=0;i<n;i++){
        t = A[i];
        f[t]++;         
    }
    
    for(ll i=1;i<=mx;i++)
        f[i] = f[i]+f[i-1];            

    for(ll i=0;i<n;i++){
        t = A[i];
        B[f[t]] = t;          
        f[t]=f[t]-1;        
    }
}
int main()
{
    ll n; cin >> n;
    ll A[n+1], B[n+1];
    for(ll i=0; i<n; i++){
        cin >> A[i];
        mx = max(mx , A[i]);
    } 
    Counting_sort(A, B, n);
    for(ll i=1; i<=n; i++) cout << B[i] << " ";
    cout << endl;

    return 0;
}
