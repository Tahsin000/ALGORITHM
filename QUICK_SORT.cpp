//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
ll ar[]={6,5,9,3,10,15,12,16, 0};

ll partition(ll l, ll h){
    ll Par = ar[l];
    ll i = l, j = h;
    while(i < j){
        do{
            i++;
        }while(ar[i] <= Par);
        do{
            j--;
        }while(ar[j] > Par);
        if (i < j){
            swap(ar[i], ar[j]);
        }
    }
    swap(ar[l], ar[j]);
    return j;
}
void Quick_sort(ll l, ll h){
    if (l < h){
        ll mid_pos = partition(l, h);
        // cout << mid_pos << endl;
        Quick_sort(l , mid_pos);
        Quick_sort(mid_pos+1, h);
    }
}
int main()
{
    int n = sizeof(ar) / sizeof(ar[0]);
    Quick_sort(0, n);
    for(ll i=0; i<n; i++) cout << ar[i] << " ";
}

