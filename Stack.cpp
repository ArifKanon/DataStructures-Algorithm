#include<iostream>
using namespace std;
#define stack_max 100

typedef struct
{
    int top;
    int data[stack_max];
}Stack;

void push(Stack *s,int item)
{
    if(s->top < stack_max)
    {
        s->data[s->top] = item;
        s->top++;
    }
    else
        cout<<"Stack is full"<<endl;
}
int pop(Stack *s)
{
    if(s->top == 0)
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else
    {
        s->top--;
        return s->data[s->top];
    }
}

int main()
{
    Stack st;
    st.top = 0;

    push(&st,1);
    //push(&st,2);

    cout<<pop(&st)<<endl;
    cout<<pop(&st)<<endl;
    return 0;
}
