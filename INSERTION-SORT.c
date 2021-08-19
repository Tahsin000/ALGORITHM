
/*
    Insertion sort
    بسم الله الرحمن الرحيم
     الجامعة الإسلامية العالمية شيتاغونغ
    لا تحزن ان الله معنا
///////////// IIUC - 49 /////////////
*/
#include<stdio.h>
int main()
{
    int arr[1000], n, i, j;

    // array size
    scanf("%d", &n);

    //array input
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    // INSERTION-SORT
    for(i=2; i<n; i++){
        int key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }

    // print array
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
