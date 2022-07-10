#include<bits/stdc++.h>
using namespace std;

class Stack{
	 public:
	 	int *arr;
	 	int top;
	 	int size;

	 Stack(int size){
	 	this->size=size;
	 	top=-1;
	 	arr = new int[size];
	 }

	 void push(int data){
	 	if(top==size){
	 		cout<<"Overflow\n";
	 		return;
	 	}

	 	arr[++top]=data;
	 }

	 void pop(){
	 	if(top==-1){
	 		cout<<"Stack Empty"<<endl;
	 		return;
	 	}

	 	top--;
	 }

	 int peek(){
	 	if(top>=0 && top<size){
	 		 return arr[top];
	 	}
	 }

	 bool isEmpty(){
	 	return top==-1;
	 }
};

int main(){
	Stack st(5);
	st.push(22);
	st.push(43);
	st.push(55);
	st.push(56);
	st.push(67);
	st.push(88);

	

	st.pop();

	cout<<st.peek()<<endl;
}