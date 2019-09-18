#include<iostream>
using namespace std;
#define max_index 10

typedef struct
{
    int top;
    int arr[max_index];
}St;

void push(St *s,int item)
{
    if(s->top < max_index)
    {
        s->arr[s->top] = item;
        s->top = s->top + 1;
    }
    else
        cout<<"Stack is full."<<endl;

}
int pop(St *s)
{
    int item;
    if(s->top == 0)
    {
        cout<<"Stack is empty."<<endl;
        return -1;
    }
    else
    {
        s->top--;
        return s->arr[s->top];
    }

}

int main()
{
    St ob,ob2;
    ob.top = 0;
    ob2.top = 0;

    push(&ob,10);
    push(&ob,20);
    push(&ob,30);

    cout<<pop(&ob)<<endl;
    cout<<pop(&ob)<<endl;
    cout<<pop(&ob)<<endl;

    push(&ob2,200);
    push(&ob2,300);
    cout<<pop(&ob2)<<endl;
    cout<<pop(&ob2)<<endl;

    return 0;
}
