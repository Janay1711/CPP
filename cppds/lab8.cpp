#include<iostream>
using namespace std;
int main()
{
    int var= 89;
    int *ptr= &var;
    cout<<var<<endl;//value of var
    cout<<&var<<endl;//address of var(ptr)
    cout<<&ptr<<endl;//address of ptr
    
    cout<<*ptr<<endl;//value of var
    cout<<ptr<<endl;//address of var(ptr)
}