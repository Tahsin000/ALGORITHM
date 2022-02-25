#include<bits/stdc++.h>
using namespace std;
#define MX      3
#define ll      long long
ll Stack[MX];
ll top = -1;
void push(ll n){
    if (top < MX - 1){
        top += 1;
        Stack[top] = n;
    }
    else cout << "Exception push !\n";
}
ll pop(){
    if (top >= 0){
        ll rem = Stack[top];
        top -= 1;
        return rem;
    }
    return -1;
    cout << "Exception pop !\n";
}
ll peek(){
    if(top >= 0){
        return Stack[top];
    }
    cout << "Exception peek !\n";
    return -1;
}
int main()
{
    push(10);
    cout << peek() << endl;
    push(10);
    pop();
    push(20);
    cout << peek();
}