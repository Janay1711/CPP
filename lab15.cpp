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

int main()
{ 
 node *newnode1=new node;
 newnode1->data=10;
 node *newnode1=new node;
 newnode1->data=20;
 node *newnode1=new node;
 newnode1->data=30;
 node *newnode1= new node;
 newnode1->data=40;
 newnode1->next=newnode1;
 newnode1->next=newnode1;
 newnode1->next=newnode1;
 cout<<"data:"<<newnode1->data<<endl<<"selfaddress:"<<newnode1<<endl<<"next address:"<<newnode1->next<<endl;
 cout<<"data:"<<newnode1->data<<endl<<"selfaddress:"<<newnode1<<endl<<"next address:"<<newnode1->next<<endl;
  cout<<"data:"<<newnode1->data<<endl<<"selfaddress:"<<newnode1<<endl<<"next address:"<<newnode1->next<<endl;
    cout<<"data:"<<newnode1->data<<endl<<"selfaddress:"<<newnode1<<endl<<"next address:"<<newnode1->next<<endl;


 }
