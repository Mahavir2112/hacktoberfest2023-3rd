#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	struct Node* next;
};

Node* newNode(int key){
	Node* temp = new Node;
	temp->key = key;
	temp->next = NULL;
	return temp;
}
int main() {
  
	Node* a = newNode(2);
	a->next = newNode(6);
	a->next->next = newNode(8);
	a->next->next->next = newNode(11);

	Node* b = newNode(1);
	b->next = newNode(4);
	b->next->next = newNode(19);
  
vector<int>v;
	while(a!=NULL)
  {
	  v.push_back(a->key);
	  a=a->next;
	}
	while(b!=NULL)
  {
	  v.push_back(b->key);
	  b=b->next;
	}
	sort(v.begin(),v.end());
  
	Node* ans= newNode(-1);
	Node* temp=ans;
  
	for(int i=0;i<v.size();i++)
  {
	  ans->next=newNode(v[i]);
	  ans=ans->next;
	}
  
	temp=temp->next;
  
	cout<<"Merged Linked List Is :"<<endl;
	while(temp!=NULL){
	cout<<temp->key<<" ";
	temp=temp->next;
	}
	return 0;
}
