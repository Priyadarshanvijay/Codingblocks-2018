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

Node* createLinkList(int noOfElements,Node*& tail){
	int x;
	Node* head = NULL;
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


void appendOddEven(Node*& inithead,Node* tail,int size)
{
	Node* head = inithead;
	Node* prev = NULL;
	bool foundOdd = false;
	while(size)
	{
		if(head->data%2 == 0 /*&& head->next->data%2 != 0*/)
		{
			if(!foundOdd)
			{
				tail->next = head;
				head = head->next;
				tail = tail->next;
				tail->next = NULL;
				inithead = head;
			}
			else
			{
				prev->next = head->next;
				tail->next = head;
				head = head->next;
				tail = tail->next;
				tail->next = NULL;
			}
		}
		else
		{
			foundOdd = true;
			prev = head;
			head = head->next;
		}
		size--;
	}
}

int main()
{
	int size;
	Node* tail = NULL;
	cin>>size;
	Node* startNode  = createLinkList(size,tail);
	appendOddEven(startNode,tail,size);
	printLL(startNode);
	return 0;
}