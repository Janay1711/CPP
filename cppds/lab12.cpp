#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
double sum(double a, int b)
{
    return a+b;
}
double sum(int a, double b)
{
    return a+b;
}


int main()
{   double s, t;
    cout<<"enter s"<<endl;
    cin>>s;
    cout<<"enter t"<<endl;
    cin>>t;

   cout<<sum(s,t)<<endl;
   

}