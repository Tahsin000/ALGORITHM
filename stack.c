/*
    بسم الله الرحمن الرحيم
     الجامعة الإسلامية العالمية شيتاغونغ
    لا تحزن ان الله معنا
///////////// IIUC - 49 /////////////
*/
#include<stdio.h>
#define Mx  100

typedef struct{
    long long top;
    long long data[Mx];
}Stack;

void push(Stack *s, long long item){
    if (s->top < Mx){
        s->top = s->top + 1;
        s->data[s->top] = item;
    }
    else{
        printf("Stack is full !\n");
    }
}

long long pop(Stack *s){
    long long item;
    if (s->top == 1){
        printf("Stack is empty!\n");
        return -1;
    }
    else {
        s->top = s->top - 1;
        item = s->data[s->top];
    }
    return item;
}
int main() {

    Stack myStack;
    long long item;
    myStack.top = 0;

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
    push(&myStack, 40);
    push(&myStack, 50);

    item = pop(&myStack);
    printf("%lld\n", item);

    item = pop(&myStack);
    printf("%lld\n", item);

    item = pop(&myStack);
    printf("%lld\n", item);
    return 0;
}
