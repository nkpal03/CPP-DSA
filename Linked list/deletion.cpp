#include <iostream>

using namespace std;

class Node
{

public:
    int data;
    Node *next;
};
Node *head;

void insertAtBegin(int n)
{
    Node *temp = new Node();
    temp->data = n;
    temp->next = head;
    head = temp;
}
void DeleteatFirst(){
    Node *ptr=head;
    ptr->next=head;
    delete ptr;

}
void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
        /* code */
    }
}

int main()
{
    head=NULL;
    insertAtBegin(2);
    insertAtBegin(4);
    insertAtBegin(5);
    insertAtBegin(7);
    print();
    DeleteatFirst();
    print();
}