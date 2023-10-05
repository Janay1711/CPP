#include<iostream>
using namespace std;
int num , prod,i;
int main()
{
    cout<<"enter the number"<<endl;
    cin>>num;
    do
    {
        prod=num*i;
        i=i+1;
        cout<<prod<<endl;

    }
    while(i<11);
}