#include<stdio.h>
#define ll              long long
void selectionSort(ll a[], ll n){
    ll i, j;
    for(i=0; i<n-1; i++){
        ll nextIndex = i;
        for(j=i+1; j<n; j++){
            if(a[j] < a[nextIndex]) nextIndex = j;
        }
        if(nextIndex != i){
            ll tmp = a[i];
            a[i] = a[nextIndex];
            a[nextIndex] = tmp;
        }
    }
}

int main()
{
    ll a[]={1,6,4,3,5,2};
    ll i, n = sizeof(a) / sizeof(a[0]);
    selectionSort(a, n);
    for(i=0; i<n; i++) printf("%lld ", a[i]);
    printf("\n");

    return 0;
}

