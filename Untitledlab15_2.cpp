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
	 node *temp=newnode1;
	 while(temp!=NULL)
	 cout<<temp->data;
	 temp=temp->next;
 newnode1->data=10;
}
