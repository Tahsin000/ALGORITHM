/*
    بسم الله الرحمن الرحيم
     الجامعة الإسلامية العالمية شيتاغونغ
    لا تحزن ان الله معنا
///////////// IIUC - 49 /////////////
*/
#include<stdio.h>
#define queue_sz  10

typedef struct{
    long long front, rear;
    long long data[queue_sz+1];
}queue;
void enqueue(queue *q, long long item){
    if((q->rear+1) % (queue_sz +1) == q->front){
        printf("queue is full !\n");
        return;
    }
    q->data[q->rear] = item;
    q->rear = (q->rear + 1) % (queue_sz + 1);
}
long long dequeue(queue *q){
    long long item;
    if (q->front == q->rear){
        printf("queue is empty !\n");
        return - 1;
    }
    item = q->data[q->front];
    q->front = (q->front + 1) % (queue_sz + 1);
    return item;
}
int main() {

    queue myQueue;
    long long item;
    myQueue.front = 0;
    myQueue.rear = 0;

    printf("\tEnqueue\n");
    enqueue(&myQueue, 10);
    printf("rear = %lld\n", myQueue.rear);
    enqueue(&myQueue, 20);
    printf("rear = %lld\n", myQueue.rear);
    enqueue(&myQueue, 30);
    printf("rear = %lld\n", myQueue.rear);
    enqueue(&myQueue, 40);
    printf("rear = %lld\n", myQueue.rear);
    enqueue(&myQueue, 50);
    printf("rear = %lld\n\n\n", myQueue.rear);

    printf("\tEnqueue\n");
    item = dequeue(&myQueue);
    printf("item : %lld , front : %lld\n", item, myQueue.front);
    item = dequeue(&myQueue);
    printf("item : %lld , front : %lld\n", item, myQueue.front);
    item = dequeue(&myQueue);
    printf("item : %lld , front : %lld\n\n", item, myQueue.front);

    return 0;
}


/*
MY QUEUE
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


*/