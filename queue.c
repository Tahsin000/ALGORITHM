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
    printf("rear = %lld\n", myQueue.rear);    enqueue(&myQueue, 40);
    printf("rear = %lld\n", myQueue.rear);
    enqueue(&myQueue, 50);
    printf("rear = %lld\n\n\n", myQueue.rear);

    printf("\tEnqueue\n");    item = dequeue(&myQueue);
    printf("item : %lld , front : %lld\n", item, myQueue.front);    item = dequeue(&myQueue);
    printf("item : %lld , front : %lld\n", item, myQueue.front);    item = dequeue(&myQueue);
    printf("item : %lld , front : %lld\n\n", item, myQueue.front);

    return 0;
}
