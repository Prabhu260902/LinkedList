#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};

Node* create(Node* head,vector<int>&arr){
    Node* temp = head;
    for(auto it:arr){
        if(head == NULL) head = temp = new Node(it);
        else{
            temp->next = new Node(it);
            temp = temp->next;
        }
    }
    return head;
}


Node* reverse(Node* head){
    Node* Head_temp = head;
    Node* pre = NULL;
    Node* temp = head;
    while(Head_temp != NULL){
        temp = temp->next;
        Head_temp->next = pre;
        pre = Head_temp;
        Head_temp = temp;
    }
    return pre;
}


void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}


int main(){
    vector<int>arr = {0,1,2,3,4};
    Node* head = NULL , *Rev_head = NULL;
    head = create(head,arr);
    print(head);
    Rev_head = reverse(head);
    print(Rev_head);
    
}

