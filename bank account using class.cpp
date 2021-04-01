#include<iostream>
#include<string.h>
using namespace std;
class Baccount		// creating class for bank account.
{
	private:
		char ac_name[50];  // declaration for depositor name
		long int ac_no;	// declaration for account number
		char ac_type[20];  // declaration for account type.
		double balance; // declaration for balance amount in the account.
		int count;
	public:
		void CNT(void)		//for initialize count to zero.
		{
			count=0;
		}
		void initvalue(char *name, long int acno, char *actype,  double amount)
		{
			ac_no=acno;
			strcpy(ac_name,name);
			strcpy(ac_type,actype);
			balance=amount;		
		}
		void deposit(void)		//function for deposit money.
		{	
			float add;
			cout<<"\n Enter the amount you want to deposite:";
			cin>>add;
			balance=balance+add;
		}
		void withdraw(void)  	//function for withdraw money.
		{ 
			float draw;
			cout<<"\n Enter the amount you want to withdraw:";
			cin>>draw;
			if(draw>balance)
			{
					cout<<"\nCannot withdraw balance.\n";
			}
			else
			balance-=draw;
		}
		void display(void)		// function to display name and balance.
		{
			cout<<"\n------------------------------------\n";
			cout<<"\nAccount number:"<<ac_no;
			cout<<"\nAccount type:"<<ac_type;
			cout<<"\nAccount name :"<<ac_name;
			cout<<"\nBalance :"<<balance;
		}
};

int main()
{ 
	char name[50], actype[20];
	long int acno;
	double amount;
	
	cout<<"\n Enter the detail of depositor\n";
	cout<<"\n================================================\n";
	cout<<"\n Account number:";
	cin>>acno;
	cout<<"\n Account type:";
	cin>>actype;
	cout<<"\n Name:";
	cin>>name;
	cout<<"\n Amount:";
	cin>>amount;
	
	Baccount obj;		//declaration of object
		obj.initvalue(name,acno,actype,amount);		//function call
		obj.deposit();					//function call
		obj.withdraw();					//function call
		obj.display();					//function call
	return 0;
}
		
