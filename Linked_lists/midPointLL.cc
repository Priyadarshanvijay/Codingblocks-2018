#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;//self referential classes

	node(int d){
		data = d;
		next = NULL;
	}
};

node* createLinkList(int x){
	int y;
	node* head = NULL;
	node* tail = NULL;
	while(x){
		cin>>y;
		node* newNode = new node(y); 
		if(head==NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;  
			tail = tail->next; 
		}
		x--;
	}
	return head;
}

void findMidElement(node* head)
{
	if(head==NULL)
	{
		return;
	}
	node* fast = head;
	node* slow = head;
	while(fast && fast->next && fast->next->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	cout<<slow->data<<endl;
}

int main()
{
	int len;
	cin >> len;
	node* head = createLinkList(len);
	findMidElement(head);
	return 0;
}