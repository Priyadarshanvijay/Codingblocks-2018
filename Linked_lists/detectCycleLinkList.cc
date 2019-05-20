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

Node* createLinkList(){
	int x;
	Node* head = NULL;
	Node* tail = NULL;
	while(true){
		cin>>x;
		if(x==-1) break;

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
	}
	return head;
}

Node* detectCycle(Node* head)
{
	Node* tortoise = head;
	Node* hare = head;
	while(tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if(tortoise == hare) break;
	}
	if(hare && hare->next == NULL) return NULL;
	return hare;
}

void removeLoop(Node* head)
{
	Node* meetingPoint = detectCycle(head);
	Node* start = head;
	while(meetingPoint)
}

int main(){
    Node* head = createLinkList();
    //construct a loop
    Node* tail = head;
    while(tail->next) {tail = tail->next;}
    tail->next = head->next->next->next;

    Node* loopNode = detectCycle(head)
    if (loopNode) cout << "has loop\n " ;
    return 0;
}