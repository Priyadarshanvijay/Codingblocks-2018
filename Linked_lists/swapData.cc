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

void printLL(const Node* head){
	if(head==NULL)
	{
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


void swapElements(Node* head,int element1, int element2)
{
	bool found1 = false;
	bool found2 = false;
	Node* addElement1 = NULL;
	Node* addElement2 = NULL;
	while(head && (!found1 || !found2))
	{
		if(head->data == element1)
		{
			addElement1 = head;
			found1 = true;
		}
		else if(head->data == element2)
		{
			addElement2 = head;
			found2 = true;
		}
		head = head->next;
	}
	swap(addElement1->data,addElement2->data);
}

int main()
{
	int size;
	cin>>size;
	Node* startNode  = createLinkList(size);
	int element1;
	int element2;
	cin>>element1;
	cin>>element2;
	swapElements(startNode,element1,element2);
	printLL(startNode);
	return 0;
}