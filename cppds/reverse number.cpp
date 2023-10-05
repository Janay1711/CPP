#include<iostream>
using namespace std;
main()
{
    int a,b,i,dig1,dig2;
    cout<<"Enter Number: ";
    cin>>a;
    b=0;
    for (i=0;i<2;i++)
    {
        dig2=a%10;
        dig1=a/10;
    }
    b=b+(dig2*10)+dig1;
    cout<<"reversed number: "<<b<<endl;
    return 0;
}
    