#include<iostream>
using namespace std;
int main()
{
	int totaldays,years,weeks,days,month;
	cout <<"enter the number of days: ";
	cin>>totaldays;
	years = totaldays/365;
	int remainingdays = totaldays % 365;
	month = remainingdays / 30;
	remainingdays = remainingdays % 30;
	weeks = remainingdays/7;
	days = remainingdays%7;
	cout<<"enter days is equall to:\n";
	cout<<"years:"<<years<<endl;
	cout<<"months:"<<month<<endl;
	cout<<"weeks:"<<weeks<<endl;
	cout<<"days:"<<days;
	return 0;
}
