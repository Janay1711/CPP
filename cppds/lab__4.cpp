#include<iostream>
using namespace std;
int num ;
int main()

{
cout<<"Enter the number"<<endl;
cin>>num;
switch(num)
{
case 0:
    cout<<"ZERO";
    break;
case 1:
cout<<"ONE";
break;
case 2:
cout<<"TWO";

break;
case 3 :
cout<<"THREE";

break;
case 4:
cout<<"FOUR";

break;
case 5:
cout<<"FIVE";

break;
case 6:
cout<<"SIX";

break;
case 7:
cout<<"SEVEN";

break;
case 8:
cout<<"EIGHT";

break;
case 9:
cout<<"NINE";

break;
default:
cout<<"number not between 0-9";
}
return 0;
}