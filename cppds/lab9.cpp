#include<iostream>
using namespace std;
int main()
{  char str[10];
int i,count=0;

  cout<<"enter your name "<<endl;
  cin.get(str,10);
  char *ptr= &str[0];
 for(i=0;*ptr=!'\0';i++);
cout<<i;

}