#include<bits/stdc++.h>
using namespace std;
#define MX      5
#define ll      long long
ll front = 0 , rear = -1 , totalItem = 0, Queue[MX];
bool isFull(){
    return (MX == totalItem); 
}
bool isEmpty(){
    return (totalItem == 0);
}
void enQueue(ll n){
    if(isFull()){
        cout << "Exception enQueue !\n";
    }
    else {
        rear = (rear + 1) % MX;
        Queue[rear] = n; 
        totalItem ++;
    }
}
ll deQueue(){
    if (isEmpty()){
        cout << "Exception deQueue !\n";
    }
    else {
        ll frontItem = Queue[front];
        Queue[front] = -1;
        front = (front + 1) % MX;
        totalItem --;
        return frontItem;
    }
}
void printQueue(){
    cout << "::::: Queue :::::\n";
    for(ll i=0; i<MX; i++){
        cout << Queue[i] << " ";
    }
    cout << endl;
}
int main(){
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    printQueue();
    enQueue(50);
    printQueue();
    enQueue(60);
    cout << "deQueue : " << deQueue() << endl;
    printQueue();
    enQueue(70);
    printQueue();
    return 0 ;
}
/*
::::: OUTPUT :::::

::::: Queue :::::
10 20 30 40 0 
::::: Queue :::::
10 20 30 40 50 
Exception enQueue !
deQueue : 10
::::: Queue :::::
-1 20 30 40 50 
::::: Queue :::::
70 20 30 40 50 

*/