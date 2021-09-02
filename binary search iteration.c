#include<bits/stdc++.h>
using namespace std;
#define ll              long long

ll binary_search(ll a[], ll r, ll f){
    ll l = 0;
    
    while(r >= l){
        ll mid = (r + l) / 2;
        if (a[mid] == f) return mid+1;
        if (a[mid] < f)
            l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

/* Start Your MAIN*/
int main()
{
    ll a[]={1,3,5,7,8,9};
    ll f = 4;
    ll r = sizeof(a) / sizeof(a[0]);

    ll ans = binary_search(a, r, f);
    if (ans != -1 )
        printf("%lld is found, index is : %lld\n", f, ans);
    
    else
        printf("%lld is not found \n", f);

    return 0;
}
