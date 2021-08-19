/*
    بسم الله الرحمن الرحيم
     الجامعة الإسلامية العالمية شيتاغونغ
    لا تحزن ان الله معنا
///////////// IIUC - 49 /////////////
*/
#include<stdio.h>

void linearSearch(long long arr[],long long n,long long s){
    long long i;
    for(i= 0; i<n; i++){
        if (arr[i] == s){
            printf("\n\tfound\n");
            return;
        }
    }
    printf("\n\tnot found\n");
}
int main() {
    printf("Enter size array : ");
    long long n, i, arr[120], s;
    scanf("%lld", &n);
    printf("Enter Search element : ");
    scanf("%lld", &s);

    for(i=0; i<n; i++) {
        printf("array [%lld] : ", i);
        scanf("%lld", &arr[i]);
    }
    linearSearch(arr, n, s);
}
