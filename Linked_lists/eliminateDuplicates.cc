#include <iostream>
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


void removeDuplicates(Node* head)
{
	while(head->next)
	{
		if(head->data == head->next->data)
		{
			Node* temp = head->next;
			head->next = head->next->next;
			delete(temp);
			continue;
		}
		head = head-> next;
	}
}

void printLL(const Node* head){
	if(head==NULL)
	{
		cout<<"Nothing to print\n";
		return;
	}
	while(head->next)
		{
			cout<<head->data<<"";
			// head->data = 2;
			head = head->next;
		}
		cout<<head->data;
		cout<<endl;
}

int main()
{
	int size;
	cin>>size;
	Node* startNode  = createLinkList(size);
	printLL(startNode);
	removeDuplicates(startNode);
	printLL(startNode);
	return 0;
}