#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head; // Global value can be accessed from any where

void Insert(int x)
{
    Node *temp = new Node();
    temp->data=x;
    temp->next = head;
    head = temp;
}
void Print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    head = NULL; // empty List
    cout << "how many numbers" << endl;

    int n, x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter The Number"<<endl;
        cin >> x;
        Insert(x);
        Print();
    }
}