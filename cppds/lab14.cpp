#include <iostream>
using namespace std;
class rectangle
{
	private:
		int length=4;
		int breadth=6;
	public:
		
		int area(){ 
		return length*breadth ;
		}
};


class cuboid : public rectangle
{
private:
 int height =7;
 public:
  int volume()
  {
  	 return area()*height;
	  }	
};
int main()
{
cuboid rec;

  cout<<"volume:"<<rec.volume()<<endl;
}
