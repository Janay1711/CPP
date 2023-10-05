#include<iostream>
using namespace std;
int main()
{ 
    int num[10],i,n;
    int a;
    cout<<"enter the size of array"<<endl;
    cin>>a;
    cout<<"enter number"<<endl;
    for(i=0;i<a;i++)
    { 
        cin>>num[i];
    }
 cout<<num[i]<<endl;
cout<<"number selected is:"<<num[2]<<endl;
cout<<"enter the number to be searched"<<endl;
cin>>n;
for(i=0;i<a;i++)
{ 
  if(n==num[i])
  {
 cout<<"the number is present";
 }
 else
 {
cout<<"number is not present";
 }
 break; 
}


}