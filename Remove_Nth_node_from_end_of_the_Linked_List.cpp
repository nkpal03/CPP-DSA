// CPP program to delete nth node from last
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

struct Node* create(struct Node* head, int x)
{
	struct Node *temp, *ptr = head;
	temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if (head == NULL)
		head = temp;
	else {
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return head;
}

Node* removeNthFromEnd(Node* head, int B)
{
	
	int len = 0;
	Node* tmp = head;
	while (tmp != NULL) {
		len++;
		tmp = tmp->next;
	}
	
	if (B > len)
	{
		cout << "Length of the linked list is " << len;
		cout << " we can't remove "<< B << "th node from the";
		cout << " linked list\n";
		return head;
	}
	
	else if (B == len) {
		
		return head->next;
		
	}
	else
	{
		int diff = len - B;		
		Node* prev= NULL;	
		Node* curr = head;		
		for(int i = 0;i < diff;i++){
			prev = curr;		
			curr = curr->next;	
		}
		prev->next = curr->next;
		return head;
	}
	
}


void display(struct Node* head)
{

	struct Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	struct Node* head = NULL;
	
	
	head = create(head, 1);
	head = create(head, 2);
	head = create(head, 3);
	head = create(head, 4);
	head = create(head, 5);
	
	int n = 2;
	
	cout << "Linked list before modification: \n";
	display(head);

	head = removeNthFromEnd(head, 2);
	cout << "Linked list after modification: \n";
	display(head);

	return 0;
}
