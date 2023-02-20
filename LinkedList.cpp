#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};

class LinkedList{
	Node* head;
public:
	LinkedList(){
		head=NULL;
	}

	void insertEnd(int data){
		Node* newNode = new Node(data);
		if(head==NULL){
			head=newNode;
			return ;
		}
		Node* temp=head;
		while(temp->next!=NULL) temp=temp->next;
		temp->next=newNode;
	}

	void insertFront(int data){
		Node* temp = new Node(data);
		temp->next=head;
		head=temp;
	}


	void insertMiddle(int data){
		Node* newNode = new Node(data);
		Node* ptr=NULL,*slow=head,*fast=head;
		while(fast!=NULL and fast->next!=NULL){
			ptr=slow;
			slow=slow->next;
			fast=fast->next->next;
		}
		newNode->next=ptr->next;
		ptr->next=newNode;
	}


	void insertPosition(int data,int pos){
		if(pos==1){
			insertFront(data);
			return ;
		}
		Node* newNode = new Node(data);
		Node* temp=head;
		for(int i=1;i<pos-1;i++){
			temp=temp->next;
		}
		newNode->next=temp->next;
		temp->next=newNode;
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
	LinkedList a;
	int n; 
	cin>>n;
	while(n--){
		int k; cin>>k;
		a.insertEnd(k);
	}
	a.insertFront(60);
	a.insertMiddle(1);
	a.insertPosition(2,1);
	a.print();
}
