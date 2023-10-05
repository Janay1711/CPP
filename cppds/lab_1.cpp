#include<iostream>
using namespace std;
int num1,num2,num3,num4;
float num5,num6;
int main ()
{
    cout<<"enter number";
    cin>>num1;
    cout<<"enter number";
    cin>>num2;
    num3=num1+num2;
    num4=num1*num3;
    num5=num1%num2;
    num6=num1/num2;
   
    cout<<"The sum is:"<<num3<<endl;
    cout<<"The product is :"<<num4<<endl;
    cout<<"The remainder is :"<<num5<<endl;
    cout<<"The quoient is :"<<num6<<endl;
    
    if(num1==num2)
    {
        cout<<"The numbers are not equal"<<endl;
    }
    else if(num1>num2)
    {
        cout<<"The number1 is greater than number2"<<endl<<num1<<endl;
    }
    else
    {
        cout<<"The number2 is greater than number1"<<endl<<num2<<endl;
    }
    
    return 0;
}