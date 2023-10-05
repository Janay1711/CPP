#include<iostream>
using namespace std;
main()
{
    int a,b,i,m,n;
    cout<<"Enter Number: ";
    cin>>a;
    b=0;
    for (i=0;i<4;i++)
    {
        m=a%10;
        a=a/10;
        b=(b*10)+m;
    }
    
    cout<<"reversed number: "<<b<<endl;
    return 0;
}