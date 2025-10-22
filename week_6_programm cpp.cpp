//--------week 6--------
#include<iostream>
using namespace std;
class complex{
	private:
		float real;
		float imag;
	public:
	complex(float r=0,float i=0):real(r),imag(i)
	{}
	void display()
	{
		cout<<real<<"+"<<imag<<"i"<<endl;
	}
	complex operator-()
	{
	return complex(-real,-imag);		
	}
	complex operator++()
	{
		++real;
		++imag;
		return *this;
		}
	complex operator+(const complex&obj){
		return complex(real+obj.real,imag+obj.imag);
		
	}	
	complex operator-(const complex&obj){
		return complex(real-obj.real,imag-obj.imag);
		
	}	
};
int main()
{
	complex c1(3,4),c2(1,2),c3;
	cout<<"orginal complex numbers"<<endl;
	cout<<"c1=";c1.display();
	cout<<"c2=";c2.display();
	c3=-c1;
	cout<<"afer unary - on c1"<<endl;
	cout<<"c3=";
	c3.display();
	++c1;
	cout<<"after unary++ on c1:"<<endl;
	c1.display();
	c3=c1+c2;
	cout<<"after binary + on c1,c2:"<<endl;
	c2.display();
	c3=c1-c2;
	cout<<"after binary + on c1,c2:"<<endl;
	c3.display();
	
	
	
}
