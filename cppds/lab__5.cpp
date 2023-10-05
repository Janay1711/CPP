#include<iostream>
using namespace std;
int num , prod,i;
int main()
{
    cout<<"enter the number"<<endl;
    cin>>num;
    for (i=0;i<11;i++)
    {
        prod=num*i;
        cout<<prod<<endl;
    }
}