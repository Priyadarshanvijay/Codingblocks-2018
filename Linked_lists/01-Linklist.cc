#include <iostream>
using namespace std;

class node{
public:
	int data;
	node *next;

	node(int d){
		data =d;
		next = NULL;
	}
};
//class Based Approach
// class LinkedList{
// 	node* head;
// 	node* tail;
// public:
// 	LinkedList(){
// 		heal = NULL;
// 		tail = NULL;
// 	}
	// void insert(){

	// }
// }

//function based approach
//passing a pointer variable by reference
void inseartAtHead(node*& head,int data){

	node* n = new node(data);
	n->next = head;
	head = n;
}

int lengthOfLL(node* head)
{
	int len = 0;
	while(head!=NULL)
	{
		head = head->next;
		len++;
	}
	return len;
}

void insertAtTail(node*& head,int data)
{
	if(head==NULL){
		head = new node(data);
		return;
	}
	node* tail = head;
	while(tail->next!= NULL){
		tail = tail->next;
	}
	tail -> next = new node(data);
	return;
}

void insertInMiddle(node*& head,int data,int p)
{
	if(head==NULL || p==0)
	{
		inseartAtHead(head,data);
	}
	else if(p>lengthOfLL(head)){
		insertAtTail(head,data);
	}
	else{
		//insert in middle
		node* n = new node(data);
		node* temp = head;
		for(int i = 1;i<=p-1; i++)
		{
			temp = temp -> next;
		}
		n->next = temp->next;
		temp->next = n; 
	}
}

void print(node* head){
	while(head!= NULL){
		cout<<head->data<<"-->";
		head = head -> next;
	}
	cout<<endl;

}

int main()
{
	node* head  =NULL;
	inseartAtHead(head,5);
	inseartAtHead(head,4);
	inseartAtHead(head,3);
	print(head);
	insertAtTail(head,6);
	insertInMiddle(head,2,3);
	print(head);
	return 0;
}