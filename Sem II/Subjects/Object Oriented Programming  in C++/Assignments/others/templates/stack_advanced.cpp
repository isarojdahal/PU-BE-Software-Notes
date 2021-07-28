#include <iostream>

#define size 10
using namespace std;

template <class T>
class Stack
{
    T stk[10];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(T data);
    void pop();
    void display();
};

template <class T>
void Stack<T>::push(T data)
{
    if (top == size - 1)
    {
        cout << "Stack is full!!!";
    }
    else
    {
        top++;
        stk[top] = data;
    }
}

template <class T>
void Stack<T>::pop()
{
    if (top == -1)
        cout << "Stack is empty!!!" << endl;
    else
    {
        int data = stk[top];
        cout << endl
             << data << " is popped out" << endl;
        top--;
    }
}

template <class T>
void Stack<T>::display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << "\n Stack[" << i << "]" << stk[i] << " ";
    }
}

int main()
{
    cout << "What is your type ? ";
    cout << "1. Float";
    cout << "2. Integer";
    cout << "3. Character ";

    Stack<float> s;
    s.push(100.9);
    s.push(12);
    s.push(798);
    s.display();
    s.pop();
    s.pop();
    s.display();
}