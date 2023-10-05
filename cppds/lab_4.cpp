#include<iostream>
using namespace std;
int mark1,mark2,mark3;
float avr;
int main()

{
cout<<"Enter the marks"<<endl;
cin>>(mark1);

avr=(mark1+mark2+mark3)/3;
 if (avr>90)   
 {
    cout<<"Grade:O"<<endl;
 }
 else if(avr>79)
 {
    cout<<"Grade: A+"<<endl;
 }
else if(avr>69)
 {
    cout<<"Grade: A"<<endl;

 }
 else if(avr>59)
 {
    cout<<"Grade: B+"<<endl;

 }
 else if(avr>49)
 {
    cout<<"Grade: B"<<endl;

 }
 else if(avr>39)
 {
    cout<<"Grade: C"<<endl;

 }
 else 
 {
    cout<<"FAIL"<<endl;

 }

 return 0;
} 
