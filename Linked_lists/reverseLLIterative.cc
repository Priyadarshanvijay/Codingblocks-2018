#include <iostream>
#include <algorithm>
using namespace std;

class Node{
public:
	int data;
	Node* next;//self referential classes

	Node(int d){
		data = d;
		next = NULL;
	}
};

Node* createLinkList(int noOfElements){
	int x;
	Node* head = NULL;
	Node* tail = NULL;
	while(noOfElements){
		cin>>x;
		//if(x==-1) break;

		Node* newNode = new Node(x); 
		if(head==NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;  //we use . operator when we try to access the data member of object so the equivalent  
			tail = tail->next;     //expression of this would be (*next).tail
		}
		noOfElements--;
	}
	return head;
}

void printLL(const Node* head){
	if(head==NULL)
	{
		// cout<<"Nothing to print\n";
		return;
	}
	while(head->next)
		{
			cout<<head->data<<" ";
			// head->data = 2;
			head = head->next;
		}
		cout<<head->data;
		cout<<endl;
}

void reverseLL(Node* head)
{
	for(Node* i = head; i->next != NULL ; i=i->next)
	{
		for(Node* j = i->next; j!=NULL ; j=j->next)
		{
			swap(i->data,j->data);
		}
	}
}

int main()
{
	int size1;
	cin>>size1;
	Node* startNode1  = createLinkList(size1);
	// printLL(startNode1);
	if(startNode1->next)
	reverseLL(startNode1);
	printLL(startNode1);
	return 0;
	return 0;
}