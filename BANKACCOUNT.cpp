//develop a c++ program that models a bank account using a class.The class include data members 
//account number,balalance and memeber functions deposit,withdraw,display balance.
#include<iostream>
#include<string>
using namespace std;
class bankaccount {
	private:
		int accountnumber;
		string name;
		float balance;
		public:
			void createaccount()
			{
				cout << "enter account number:";
				cin >>accountnumber;
				cin.ignore();
				cout<<"enter Account number Holder Name";
				getline(cin,name);
				cout<<"Enter Initial Balence:";
				cin>>balence;
				cout<<"\n Account Created Succesfully! \n";
				
			}
			void deposit(){
				float amount;
				cout<<"Enter amount to deposit:";
				cin>>amount;
				if(amount>0)
				{
					balence += amount;
					cout<<"?"<<amount<<"deposited succesfully.\n";
				}
				else{
					cout<<"Invalid deposit amount.\n"
				}
			}
			void withdraw(){
				float amount;
				cout<<"enter amount to withdraw ";
				cin>>amount;
				if(amount > 0 && amount <= balence){
					balence -=amount;
					cout<<"?"<<amount<<"withdrawn succesfully.\n"
				}
				else{
					cout<<"Insufficient balence or invalid amount.\n";
				}
			}
			void display()const{
				cout<<"\n-----Account Details------\n";
				cout<<"Account Number : "<<accountNumber<<endl;
				cout<<"Account holder :"<<name<<endl;
				cout<<"current Balence :?"<<balence<<endl;
			}
};
int main()
{
	BankAccount myAccount;
	int choice;
	myAccount.createAccount();
	do{
		cout<<"\n------Bank menu-----\n";
		cout<<"1.deposit\n";
		cout<<"2.withdraw\n";
		cout<<"3.display balence\n";
		cout<<"4.Exit\n";
		cout<<"Enter your choice:";
		cin>>choice;
		switch (choice){
			case 1:
				myAccount.deposit();
				break;
				case 2:
					myAccount.withdraw();
					break;
					case 3:
						myAccount.display balence();
						break;
						case 4:
							cout<<"thank you for using banking system.\n"
							break;
							default 
							cout<<"Invalid choice .please try again\n;";
		}
		while (choice !=4);
	}
	return 0;
}
