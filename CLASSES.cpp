#include<iostream>
using namespace std;
class car{
	public:
		//class data
		string brand,model;
		int mileage = 0;
		//class function to drive the car
		void drive(int distance)
		{
			mileage +=distance;
		}
			// class function to print variables
			void show_data()
			{
				cout<<"brand:"<<brand<<endl;
				cout<<"model"<<model<<endl;
				cout<<"distance driven"<<mileage<<"miles"<<endl;
			}		
};
int main()
{
	// create an object of carn class
	car my_car;
	// intialize variables of my car 
	my_car.brand = "honda";
	my_car.model = "accord";
	my_car.driven(50);
	//dispLAY object variables
	my.show_data();
}
