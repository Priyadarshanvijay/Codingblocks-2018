#include <iostream>
#include <cmath>
using namespace std;

class Node{
public:
	int data;
	Node* next;//self referential classes
	Node* prev;

	Node(int d){
		data = d;
		next = NULL;
		prev = NULL;
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
			newNode->prev = tail;
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


bool findPalindrome(Node* head,Node* tail,int size)
{
	size = size/2;
	while(size)
	{
		if(head->data != tail->data)
			return false;
		head = head->next;
		tail = tail->prev;
		size--;
	}
	return true;
}

int main()
{
	int size;
	Node* tail = NULL;
	cin>>size;
	Node* startNode  = createLinkList(size,tail);
	if(findPalindrome(startNode,tail,size))
	{
		cout<<"true\n";
	}
	else
	{
		cout<<"false\n";
	}
	return 0;
}