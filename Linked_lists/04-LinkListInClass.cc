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

node* createLinkList(){
	int x;
	node* head = NULL;
	node* tail = NULL;
	while(true){
		cin>>x;
		if(x==-1) break;

		node* newNode = new node(x); 
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
	}
	return head;
}

void printLL(const node* head){
	if(head==NULL)
	{
		cout<<"Nothing to print\n";
		return;
	}
	while(head->next)
		{
			cout<<head->data<<"-->";
			// head->data = 2;
			head = head->next;
		}
		cout<<head->data;
		cout<<endl;
}

void deleteNode(node*& head,int x)
{
	int flag = 1;
	if(head == NULL)
	{
		return;
	}
	node* current = head;
	node* prev = current;
	while(current->data != x)
	{
		prev = current;
		if(current->next == NULL)
		{
			cout<<"Element Not Found!!\n";
			return ;
		}
		current = current->next;
	}
	if(current == prev)
	{
		head = current->next;
		delete current;
		return;
	}
	prev->next = current->next;
	delete current;
}

void reverseList(node*& head)
{
	if(head==NULL)
	{
		cout<<"Nothing to reverse\n";
		return;
	}
	node* temp = NULL;
	node* curr = head;
	node* temp2 = NULL;
	while(head->next != NULL)
	{
		head = head -> next;
	}
	temp = curr -> next;
	curr -> next = NULL;
	while(curr!=head)
	{
		temp2 = temp->next;
		temp -> next = curr;
		curr = temp;
		temp = temp2;
	}
}

void reverseList2(node*& head)
{

}

void mergeSort(node* head)
{

}

int main()
{
	node* startNode  = createLinkList(); //LinkList Allocation should be Dynamic as when the function Completes
	printLL(startNode);
	// deleteNode(startNode,1);
	reverseList(startNode);
	printLL(startNode);
	return 0;
}