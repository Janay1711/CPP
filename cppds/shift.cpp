#include<iostream>
#include<bitset>
int main()
{
    int var;
    var=0;
    cout<<"Variable before shift:"<<var<<endl;
    cout<<"Binary="<<bitset<8>(var)<<endl;
    var=(1<<7)|(2<<4);
    
}
