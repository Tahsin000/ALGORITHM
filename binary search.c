/*
    بسم الله الرحمن الرحيم
     الجامعة الإسلامية العالمية شيتاغونغ
    لا تحزن ان الله معنا
///////////// IIUC - 49 /////////////
*/
#include<stdio.h>
long long Sort(long long arr[], long long n) {
    long long i, j;
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                long long tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

long long binarySearch(long long arr[],long long l, long long r, long long s) {
    if(r >= l) {
        long long mid = l + (r - l)/ 2;
        if(arr[mid] == s)
            return mid;
        if (arr[mid] > s)
            return binarySearch(arr,l, mid - 1, s);
        return binarySearch(arr, l+1, r, s);

    }
    return -1;
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
    Sort(&arr, n);

    if (binarySearch(arr,0, n-1, s) == -1) {
        printf("\n\tnot found\n");
    }
    else
        printf("\n\tfound\n");
}
