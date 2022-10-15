#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void Print(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();

    second = new Node();

    third = new Node();

    head->data = 1;
    head->next = third;

    second->data = 2;
    second->next = NULL;
    third->data = 3;
    third->next = second;
    Print(head);
}