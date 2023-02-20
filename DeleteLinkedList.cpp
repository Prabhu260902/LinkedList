#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};


class LinkedList{
	Node* head;
public:
	LinkedList(){
		head = NULL;
	}

	void insertFront(int data){
		Node* temp = new Node(data);
		temp->next=head;
		head=temp;
	}

	void deleteLast(){
		Node* temp = head;
		while(temp->next->next != NULL) temp = temp->next;
		temp->next = NULL;
	}


	void deleteFront(){
		head = head->next;
	}


	void deletePosition(int pos){
		if(pos==1){
			deleteFront();
			return ;
		}
		Node* temp = head;
		for(int i=1;i<pos-1;i++){
			temp = temp->next;
		}
		temp->next = temp->next->next;
	}


	void deleteMiddle(){
			Node* ptr=NULL,*slow=head,*fast=head;
			while(fast!=NULL and fast->next!=NULL){
				ptr=slow;
				slow=slow->next;
				fast=fast->next->next;
			}
			ptr->next=ptr->next->next;
		}



	void print(){
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}

};


int main(){
	LinkedList list;
	for(int i=1;i<11;i++){
		list.insertFront(i*10);
	}
	


	list.deletePosition(10);
	list.print();

	list.deleteLast();
	list.print();

	list.deleteMiddle();
	list.print();

	list.deleteFront();
	list.print();

}
