#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;

}

int main()
{
int a, b;
cout<<"enter number"<<endl;
cin>>a;
cout<<"enter number"<<endl;
cin>>b;

swap(&a,&b);
cout<<"after swap:"<<a<<endl<<b;
}
