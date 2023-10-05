#include<iostream>
using namespace std;
int main()
{
     int  var[6]={34,2 ,31,5,67,8};
    int  *ptr= &var[0];
     int i,loc;
     cout<<"enter location:"<<endl;
     cin>>loc;
    for (i=0;i<7;i++)
    { 
        if(loc==i)
        {
        cout<<*ptr<<endl;
        ptr++;
        }
       else
       {
        cout<<"No number available ";
       }
       break;
    }
}