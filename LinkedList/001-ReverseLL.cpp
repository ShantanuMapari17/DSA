#include<bits/stdc++.h>
#include "print.cpp"
using namespace std;

class Node{
public:
	int data;
	Node *next;

	Node(int data){
		this->data=data;
		this->next=NULL;
	}

};

void print(Node* head){
	Node* curr=head;
	while(curr){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}

void InsertAtBegin(Node* &head,int d){
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
}



void reverse(Node* &head){
	if(!head ||!head->next)
		return;

	Node* curr=head;
	Node* prev=NULL;
	// Node* forward=curr->next;
	while(curr)
	{
		Node* forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}

	head=prev;
}

int main(){
	Node* head=NULL;
	InsertAtBegin(head,10);
	InsertAtBegin(head,20);
	InsertAtBegin(head,30);
	InsertAtBegin(head,40);
	print(head);
	reverse(head);
	print(head);
}