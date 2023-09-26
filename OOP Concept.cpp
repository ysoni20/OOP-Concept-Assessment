#include<iostream>
#include<time.h>
using namespace std;

class atm{
	 int pin=12345,choose;
	public:
	atm()
	{
			cout<<"\t\t||||||||||||||||||||||||||||| ATM ACCOUNT ACCESS |||||||||||||||||||||||||||||"<<endl<<endl;
			cout<<"Enter your Acc pin access Number! [Only one attempt is allowed]"<<endl;
			cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
			cin>>pin;
			if(pin==12345){
			
			cout<<"||||||||||||||||||||||||||||| ATM Main Menu Scrren |||||||||||||||||||||||||||||"<<endl<<endl;
			cout<<"Enter [1] To Deposit Cash"<<endl;
			cout<<"Enter [2] To Withdarw Cash"<<endl;
			cout<<"Enter [3] To Balance Inquiry"<<endl;
			cout<<"Enter [0] To Exit ATM"<<endl;
			
			cout<<"PLEASE ENTER A SELECTION AND PRESS RETURN KEY: ";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
					cout<<"||||||||||||||||||||||||||||| ATM ACCOUNT DEPOSIT SYSTEM |||||||||||||||||||||||||||||"<<endl<<endl;
					cout<<"The names of the Account holders are :Rakesh Kharva"<<endl;
					cout<<"The account holders adderss is :Mumbai"<<endl;
					cout<<"The branch location is :Andheri"<<endl;
					cout<<"Account number is :5678"<<endl;
					cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
					cout<<"Present available balance is :Rs. 20000"<<endl;
					cout<<"Enter the amount to be deposited Rs. 1"<<endl;
					cout<<"Your new available balance Amount is RS. 20001"<<endl;
					cout<<"Thank you"<<endl;
					break;
				case 2:
					cout<<"||||||||||||||||||||||||||||| ATM ACCOUNT WITHDRAWAL |||||||||||||||||||||||||||||"<<endl<<endl;
					cout<<"The names of the Account holders are :Rakesh Kharva"<<endl;
					cout<<"The account holders adderss is :Mumbai"<<endl;
					cout<<"The branch location is :Andheri"<<endl;
					cout<<"Account number is :5678"<<endl;
					cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
					cout<<"Insuffcient Available Balance in your account."<<endl<<endl;
					cout<<"Sorry !!"<<endl;
					break;
				case 3:
					cout<<"||||||||||||||||||||||||||||| ATM BALANCE INQURY |||||||||||||||||||||||||||||"<<endl<<endl;
					cout<<"The names of the Account holders are :Rakesh Kharva"<<endl;
					cout<<"The account holders adderss is :Mumbai"<<endl;
					cout<<"The branch location is :Andheri"<<endl;
					cout<<"Account number is :5678"<<endl;
					cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
					cout<<"Available balance in your account is :20001"<<endl;
					cout<<"THANK YOU!"<<endl;
					break;
				case 0:
					cout<<"||||||||||||||||||||||||||||| EXIT FROM ATM  |||||||||||||||||||||||||||||"<<endl<<endl;
					cout<<"Press any key to exit from atm "<<endl;
				
				
			}
	}
	else{
		cout<<"wroen";
	}
	}
};


class help{
	public:
		help()
		{
				cout<<"||||||||||||||||||||||||||||| ATM ACCOUNT ACCESS |||||||||||||||||||||||||||||||||||"<<endl<<endl;
				cout<<"You must have the correct pin number to access this account. See your"<<endl;
				cout<<"bank representative for for assistance during bank opning hours"<<endl;
				cout<<"Thanks for, your choice today!!"<<endl;
		}
};
int main(){
	cout<<"\t\t\t||||||||||||||||||||||||||||| WELCOME TO ATM |||||||||||||||||||||||||||||"<<endl<<endl;
	cout<<"\t\t\t\t\t------------------------------------------------"<<endl;
	cout<<"\t\t\t\t\t\tCurrant date is	"<<__DATE__<<endl;
	cout<<"\t\t\t\t\t\tCurrant time is	"<<__TIME__<<endl;
	cout<<"\t\t\t\t\t------------------------------------------------"<<endl<<endl;
		int ch,pin=12345;
	cout<<"\t\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	cout<<"\t\t\t\tPress 1 and Then press enter to access your account via pin number"<<endl;
	cout<<"\t\t\t\t\t\t\t\tor"<<endl<<"\t\t\t\tPress 0 and press enter to get help"<<endl;
	cin>>ch;
	if(ch==1)
	{
		atm a;
	}
	else if(ch==0 )
	{
		help a;
		}
	else
	{
		return 0;
	}
	
	
	return 0;
}
