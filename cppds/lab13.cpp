#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"enter number"<<endl;
    cin>>a;
     cout<<"enter number"<<endl;
    cin>>b;
try{
  if (b==0)
  {
  	throw ("divided by zero not possible");
  	int c=a/b;
  	cout<<"answer:"<<c<<endl;
  }
}
 catch(const char*msg)
  {
  	cout<<msg;
  }
    
}

