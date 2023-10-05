#include<iostream>
using namespace std;
class cuboid
{
    public:
    double h;
    double l;
    double b;
    void var()
    {
       cout<<"enter the height"<<endl;
     cin>>h;
      cout<<"enter the lenght"<<endl;
     cin>>l;
      cout<<"enter the breadth"<<endl;
     cin>>b; 
    
    }
 
    double volume()// volume is member function of class
    {
        double vol;
        vol=h*l*b;
       
        return vol;
    }
  
};
int  main()
{   cuboid c1; //c1 is the object here.
  
    c1.var();
   cout<<c1.volume()<<endl;
   return 0;
}