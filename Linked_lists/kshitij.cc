#include <iostream>
#include<ctime>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d)
    {
     data=d;
     next=NULL;
    }

};
void insertion(node*&head,node*&tail )
{
		int x,m;
		cin>>m;
		for(int i=1;i<=m;i++){
		cin>>x;

	
		node*newNode=new node(x);
		if(head==NULL){
			head=newNode;
			tail=newNode;
		}
		else{
			(*tail).next=newNode;
			tail=tail->next;
		}
		head->next->next->next->next->next = head->next->next;
	
		

	}
	
}
void loop(node*&head)
{
	int timeStart;
	timeStart = clock();
while (head->next!=NULL)
{
	head=head->next;
    if ((clock() - timeStart) / CLOCKS_PER_SEC >= 5) // time in seconds
        break;
}
cout<<"loop detected";
}
void middle(node*&head){
    node* tortoise = head;
    node* hair = head;

    while(tortoise && hair && hair->next && hair->next->next){
        tortoise = tortoise->next;
        hair = hair->next->next;
    }
    cout<<tortoise->data;
    
}

int main()
{
	int x;
	node*head=NULL;
	node*tail=NULL;

	
	insertion(head,tail);
	
	//middle(head);
	loop(head);

	
	 
	
}