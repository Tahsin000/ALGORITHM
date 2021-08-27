#include <stdio.h>

int Frequency_Count(int a[], int n){
    for(int i=0; i<n; i++){
        int m;
        scanf("%d", &m);
        a[m]++;
    }
}

void Print_array(int a[]){
    int n = sizeof(a) / sizeof(a[0]);
    for(int i=0; i<100; i++){
        if (a[i] > 0)
        printf("%d count value -> %d\n",i, a[i]);
    }
}

int main()
{
    // array all value assign = 0;
    int a[100]={};
    int n;
    scanf("%d", &n);
    Frequency_Count(a, n);
    Print_array(a);
}