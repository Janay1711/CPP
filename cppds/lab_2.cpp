#include<iostream>
 using namespace std;
 //For writing a program to set bit 3 to 1
 int num, result;
 int main()
 {
cout<<"enter the number"<<endl;
cin>>num;
result=num&~(1<<3);
cout<<result<<endl;

return 0;

 }
