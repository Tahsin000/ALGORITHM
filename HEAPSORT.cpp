#include<bits/stdc++.h>
#include <iostream>
#define ll      long long
using namespace std;

void INPUT(){
    // faster ios_base::sync_with_stdio(false); cin.tie(NULL); 
    #ifndef ONLINE_JUDGE 
    freopen("inputf.in", "r", stdin); freopen("outputf.in", "w", stdout); 
    #endif
}

void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);

        // Heapify root element to get highest element at root again
        heapify(arr, i, 0);
    }
}

// Print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver code
int main() {
       INPUT();
    int n; cin >> n;
    int arr[n]={};
    for(ll i=0; i<n; i++) cin >> arr[i];
    // int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);

    cout << "Sorted array is \n";
    // printArray(arr, n);
    cout << "Time takeen : " << (float)clock()/CLOCKS_PER_SEC << " secs\n";time_t ttime = time(0); char* dt = ctime(&ttime);cerr << dt << endl;

    return 0;
}