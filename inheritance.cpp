#include<iostream>
using namespace std;
class animal{
	public:             //parent class
		int legs = 4;
};

// dog class inherriting animal class

class Dog : public animal  //child class
{
	public:
		int tail = 1;
		
};
int main ()
{
	Dog d;
	cout<<d.legs<<endl;
	cout<<d.tail;
}
