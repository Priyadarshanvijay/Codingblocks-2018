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



Node* reverseList2(Node* head){
    Node* cur = head;
    Node* previous = NULL; 

    while(cur){
        Node* ahead = cur->next;
        cur->next = previous;
        previous = cur;
        cur = ahead;
    }
    return previous;
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
	int size1;
	cin>>size1;
	Node* startNode1  = createLinkList(size1);
	// printLL(startNode1);
	if(startNode1->next)
	startNode1 = reverseList2(startNode1);
	printLL(startNode1);
	return 0;
}