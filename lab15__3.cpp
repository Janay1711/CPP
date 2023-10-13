#include<iostream>
using namespace std;
  
class node
{ public:
	int data ;
	node*next;
     node()
	{
		data=0;
		next=NULL;
	}

};
  node *head;

 void addAtbeginning(int data)
 {
 	node *newnode=new node;
 	newnode->data=data;
 	newnode->next= head;
 	head=newnode;
 	
 }
int display()
 {
 
 	node *temp=head;
 	while( temp!=NULL)
 	{
 		cout<< temp->data;
 		temp=temp->next;
	 }
 }

int main()
{ 
 node *newnode1=new node;
 newnode1->data=10;
 node *newnode2=new node;
 newnode2->data=20;
 node *newnode3=new node;
 newnode3->data=30;

 node *newnode4= new node;
 newnode4->data=40;

 newnode1->next=newnode2;
 newnode2->next=newnode3;
 newnode3->next=newnode4;

 cout<<"data:"<<newnode1->data<<endl<<"selfaddress:"<<newnode1<<endl<<"next address:"<<newnode1->next<< display()<<endl;
 cout<<"data:"<<newnode2->data<<endl<<"selfaddress:"<<newnode2<<endl<<"next address:"<<newnode2->next<<endl;
  cout<<"data:"<<newnode3->data<<endl<<"selfaddress:"<<newnode3<<endl<<"next address:"<<newnode3->next<<endl;
    cout<<"data:"<<newnode4->data<<endl<<"selfaddress:"<<newnode4<<endl<<"next address:"<<newnode4->next<<endl;
addAtbeginning(40);
display();

 }
