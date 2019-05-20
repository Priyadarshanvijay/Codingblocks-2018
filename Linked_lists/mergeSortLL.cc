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


Node* mergeSortLL(Node* head1,Node* head2)
{
	if(!head1 && !head2)
	{
		return NULL;
	}
	if(!head1)
	{
		return head2;
	}
	if(!head2)
	{
		return head1;
	}
	Node* newHead = NULL;
	if(head1->data <= head2->data)
	{
		// cout<<"THis\n";
		newHead = head1;
		head1 = head1->next;
	}
	else
	{
		// cout<<"THIS ALSO\n";
		newHead = head2;
		head2 = head2->next;
	}
	Node* cur = newHead;
	while(head1 && head2)
	{
		if(head1->data > head2->data)
		{
			// cout<<"THEN "<<head1->data<<" & "<<head2->data<<endl;
			cur->next = head2;
			head2 = head2->next;
		}
		else
		{
			cur->next = head1;
			head1 = head1->next;
		}
		cur = cur->next;
	}
	if(head1)
	{
		cur -> next = head1;
	}
	else if(head2)
	{
		cur->next = head2;
	}
	return newHead;
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

int main()
{
	int testCases = 0;
	cin>>testCases;
	while(testCases)
	{
		int size1;
		cin>>size1;
		Node* startNode1  = createLinkList(size1);
		int size2;
		cin>>size2;
		Node* startNode2  = createLinkList(size2);
		// printLL(startNode1);
		// printLL(startNode2);
		startNode1 = mergeSortLL(startNode1,startNode2);
		printLL(startNode1);
		testCases--;
	}
	return 0;
}