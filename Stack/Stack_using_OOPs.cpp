#include <bits/stdc++.h>
using namespace std;
// implementation of stack using OOPs
// defining global variable of name size with value 100
#define size 100
class Stack
{
private:
    int stk[size]; // allocating memory to stack
    static int top;

public:
    void push();    // pushes element into stack
    void pop();     // removes element from stack
    bool isEmpty(); // checks if the stack is empty or not
    bool isFull();  // checks if the stack is full or not
    void stkTop();  // returns the stack Top ,that is, the top most element in stack
    void display();
};

int Stack::top = -1; // static integer with name top and assigning value -1

bool Stack::isFull()
{
    if (top == size)
        return true;
    else
        return false;
}

bool Stack::isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}

void Stack::push()
{
    cout << "Enter number to push :";
    int n;
    cin >> n;
    if (isFull())
        return;
    else
    {
        top++;
        stk[top] = n;
    }
}

void Stack::pop()
{
    if (isEmpty())
        return;
    else
    {
        cout << stk[top] << " is popped." << endl;
        top--;
    }
}

void Stack::stkTop()
{
    cout << stk[top] << " is stack top." << endl;
}

void Stack::display()
{
    for (int i = top; i >= 0; i--)
        cout << stk[i] << endl;
}

int32_t main()
{
    Stack stk; // creating object for class Stack
    int choice;
    do
    {
        cout << "1.Push\n2.Pop\n3.Stack top\n4.Display all elements\n99.Exit\n>>";
        cin >> choice;
        switch (choice)
        {
        case 1:
            stk.push();
            cout << "\n";
            break;
        case 2:
            stk.pop();
            cout << "\n";
            break;
        case 3:
            stk.stkTop();
            cout << "\n";
            break;
        case 4:
            stk.display();
            cout << "\n";
            break;
        case 99:
            break;
        default:
            cout << "Enter a valid input." << endl;
            break;
        }
    } while (choice != 99);
    return 0;
}