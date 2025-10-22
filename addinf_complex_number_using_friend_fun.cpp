#include<iostream>
using namespace std;
//class for complex numbers
class complex{
	private:
		int real,imag;
		public:
			//constroucter
			complex(int r =0,int i=0){
				real = r;
				imag = i;
			}
			//operator overloading for +
			complex operator +(complex obj)
			{
				complex temp;
				temp.real = real + obj.real;
				temp.img = img + obj.img;
				return temp;
				
			}
			// friend function declaration
			friend complex operator+(complex c1,complex c2);
			
			//display function
			void display(){
				cout <<real<<" + "<<img<<" i "<<endl;
			}
			
};
//friend function definarion
complex operator +(complex c1, complex c2){
	complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp; 
}
int main()
{
	complex obj(3,4);
	complex obj(5,6);
	complex result = obj 1 + obj 2;  //operator + (obj 1 + obj 2)
	cout<<"result :"; 
	result display();
	return 0;
}
	
