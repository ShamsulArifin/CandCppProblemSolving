#define SIZE 5
#include <iostream>

using namespace std;

int A[SIZE];
int top = -1;


bool isempty()

{
    if (top == -1)
        return true;
    else
        return false;
}

void push(int value)

{
    if(top==SIZE-1)
    {
        cout << "Stack is full!" << endl;
    }
    else
    {
        top++;
        A[top] = value;
    }
}

void pop()

{
    if(isempty())
        cout << "stack is empty!" << endl;
    else
        top--;
}

void show_top()

{
    if(isempty())
        cout << "Stack is empty!" << endl;
    else
        cout << "Element at top is:" << A[top] << endl;
}

void displayStack()

{
    if(isempty())
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        for(int i=0 ; i<=top ; i++)
            cout << A[i] << " " << endl;
    }
}

int main()
{
    push(2);
    push(3);
    push(4);
    push(7);

    displayStack();

    pop();

    show_top();

    return 0;
}
