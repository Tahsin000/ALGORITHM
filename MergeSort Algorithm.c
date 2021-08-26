/*
    بسم الله الرحمن الرحيم
     الجامعة الإسلامية العالمية شيتاغونغ
    لا تحزن ان الله معنا
///////////// IIUC - 49 /////////////
*/ 
#include <stdio.h>
#include <iostream>
using namespace std;
#define ll              long long
#define MX              1000000007
/* Start Your MAIN*/

void margeSort (ll a[],ll l, ll m, ll r){
    ll n1 = m - l + 1;
    ll n2 = r - m;
    ll R[n1], L[n2];

    for(ll i=0; i<n1; i++){
        L[i] = a[l + i];
    }
    for(ll i=0; i<n2; i++){
        R[i] = a[m + i + 1];
    }

    ll i = 0, j = 0, k=l;

    while(i < n1 && j < n2){
        if (L[i] <= R[j]){
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        a[k] = R[j];
        j++;
        k++;
    }
}

void marge(ll a[], ll l, ll r){
    if (l < r){
        ll m = l + (r - l) / 2;
        marge(a, l, m);
        marge(a, m+1, r);
        margeSort(a, l, m, r);
    }
}

int main(){
    ll a[]={1,6,3,4,5,2};
    ll r = sizeof(a) / sizeof(a[0]);
    ll l = 0;
    /*
    Here a = array, l = lowerbound , r = upperbound;
    marge(array , lowerbound , array upperbound) is a function which can splid array mid point || here is three argument;
    margeSort(array , lowerbound , array mid position , upperbound) is a function which can sorted in our array a[] || here is four argument ;
    */
    marge(a, l, r-1);

    // array print;
    for(ll i =0; i<r; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;

}
