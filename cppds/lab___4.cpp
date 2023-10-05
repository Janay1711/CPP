#include<iostream>
using namespace std;
int num ,quo,qou1;
int main()

{
cout<<"Enter the number"<<endl;
cin>>num;
if(num>=10)
{

qou1=num/10;
cout<<qou1<<endl;
quo=num%10;
cout<<quo<<endl;
}
else
{
cout<<"number is single digit";

}

return 0;
}