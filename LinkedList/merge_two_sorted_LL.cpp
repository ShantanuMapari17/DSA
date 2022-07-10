#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int d){
		this->data=d;
		this->next=NULL;
	}
};

void InsertAtEnd(Node* &head, Node* &tail, int data){
	Node * temp = new Node(data);
	if(!head){
		head=temp;
		tail=temp; 
		return;
	}

	tail->next=temp;
	tail=temp;
}


Node* findMid(Node* head){
	if(!head || !head->next)
		return head;

	Node* slow=head;
	Node* fast=head->next;

	while(fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
	}

	return slow;
}

Node* merge(Node* a,Node* b){
	if(!a)	return b;
	if(!b)	return a;

	Node* result;

	if(a->data < b->data){
		result=a;
		result->next=merge(result->next,b);
	}
	else{
		result=b;
		result->next=merge(a,result->next);
	}

	return result;
}

Node* mergeSort(Node* head){
	if(!head || !head->next)
		return head;

	Node* mid=findMid(head);

	Node* left=head;
	Node* right=mid->next;

	mid->next=NULL;

	left=mergeSort(left);
	right=mergeSort(right);

	return merge(left,right);
}

void printList(Node* head){
	Node* temp=head;
	while(temp){
		cout<<temp->data<<" ";
		temp=temp->next;
	}

	cout<<endl;
}

int main(){
	Node* head1=NULL;
	Node* tail1=NULL;

	InsertAtEnd(head1,tail1,7);
	InsertAtEnd(head1,tail1,3);
	InsertAtEnd(head1,tail1,5);
	InsertAtEnd(head1,tail1,1);
	InsertAtEnd(head1,tail1,2);
	InsertAtEnd(head1,tail1,8);
	InsertAtEnd(head1,tail1,9);

	// Node* head2=NULL;
	// Node* tail2=NULL;

	// InsertAtEnd(head2,tail2,2);
	// InsertAtEnd(head2,tail2,4);
	// InsertAtEnd(head2,tail2,6);
	// InsertAtEnd(head2,tail2,8);

	// // cout<<"LIST 1 -> ";
	// // printList(head1);

	// // cout<<"LIST 2 -> ";
	// // printList(head2);

	// head1=merge(head1,head2);
	head1=mergeSort(head1);
	printList(head1);







}