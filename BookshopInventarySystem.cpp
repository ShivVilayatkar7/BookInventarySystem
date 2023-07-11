# BookshopInventarySystem

#include<iostream>
#include<string>

using namespace std;

class book{
	string name[10], author[10], language[10], publication[10];
	int price[10], total, acNum, password;
	string add, phnNo, searchh;
	public:
		void enterData();
		void editData();
		void showData();
		void buy();
		void search();
};

void book :: enterData(){
	
	cout << "\n\n| How Many Books Data You Want To Enter ? :: " ;
	cin >> total ;
	
	for(int i=0;i<total;i++)
	{
	cout << "\n\n| Fill The Following Data |" << "\n\n" ;
	
	cout << "Name        : " ;
	cin >> name[i] ;
	
	cout << "Publication : " ;
	cin >> publication[i] ;
	
	cout << "Author      : " ;
	cin >> author[i] ;
	
	cout << "Language    : " ;
	cin >> language[i] ;
	
	cout << "Price       : " ;
	cin >> price[i] ;
	}
	
	cout << "\n\nData Saved Successfully !" << "\n" ;
}

void book :: editData(){
	
	for(int i=0;i<total;i++)
	{
	cout << "\n\n| Fill The New Data |" << "\n\n" ;
	
	cout << "Name        : " ;
	cin >> name[i] ;
	
	cout << "Publication : " ;
	cin >> publication[i] ;
	
	cout << "Author      : " ;
	cin >> author[i] ;
	
	cout << "Language    : " ;
	cin >> language[i] ;
	
	cout << "Price       : " ;
	cin >> price[i] ;
	}
	
	cout << "\n\nNew Data Saved Successfully !" << "\n" ;
}

void book :: showData(){
	
	for(int i=0;i<total;i++)
	{
		cout << "Name         : " << name[i]        << "\n" ;
		cout << "Punblication : " << publication[i] << "\n" ;
		cout << "Author       : " << author[i]      << "\n" ;
		cout << "Language     : " << language[i]    << "\n" ;
		cout << "Price        : " << price[i]       << "\n\n" ;
	}
}

void book :: buy()
{
	cout << "\n\n| Search The Name Of Book ? |" ;
	cin >> searchh ;
	
	for(int i=0;i<total;i++)
	{
		if(searchh == name[i])
		{
			cout << "Name         : " << name[i]        << "\n" ;
			cout << "Punblication : " << publication[i] << "\n" ;
			cout << "Author       : " << author[i]      << "\n" ;
			cout << "Language     : " << language[i]    << "\n" ;
			cout << "Price        : " << price[i]       << "\n\n" ;
			
			cout << "\n\n| Following Info Required for delivery |\n\n" ;
			
			cout << "\n\n| Contact info |\n\n" ;
			
			cout << "Address : " ;
			cin >> add ;
			cout << "Phone Number : " ;
			cin >> phnNo ;
			
			cout << "\n\n| Enter Your Payment Details |" << "\n\n" ;
			
			cout << "A/C Number or UPI id Number : " ;
			cin >> acNum ;
			
			cout << "Your Order Conformed, You Will Recieve Your Order Very Soon." << "\n" ;
			cout << "thanks for visiting !" << "\n" ; 
			cout << "\n\nYour Details Saved Successfully !" << "\n\n" ;
			
			break;
		}
		else
		{
			cout << "\n\nSorry !! No Records Found. " << "\n\n" ;
		}
	}
}

void book :: search()
{
	cout << "\n\n| Search The Name Of Book ? |" ;
	cin >> searchh ;
	
	for(int i=0;i<total;i++)
	{
		if(searchh == name[i])
		{
			cout << "Name         : " << name[i]        << "\n" ;
			cout << "Punblication : " << publication[i] << "\n" ;
			cout << "Author       : " << author[i]      << "\n" ;
			cout << "Language     : " << language[i]    << "\n" ;
			cout << "Price        : " << price[i]       << "\n\n" ;
			
			break;
		}
		else
		{
			cout << "\n\nSorry !! No Records Found. " << "\n\n" ;
		}
	}
}

int main()
{
	book b ;
	
	cout << "\t\t\t ____________________________ " << "\n" ;
	cout << "\t\t\t|                            |" << "\n" ;
	cout << "\t\t\t|    * Modern Book Store *   |" << "\n" ;
	cout << "\t\t\t|____________________________|" << "\n\n" ;
	
	cout << "|| Welcome to Modern Book Store's Book Inventary System ||" << "\n\n" ;

	back:
		
	cout << "*******************************" << "\n" ;
	cout << "*  1. Enter Books Details.    *" << "\n" ;
	cout << "*  2. Edit Book Data.         *" << "\n" ;
	cout << "*  3. See Book Data.          *" << "\n" ;
	cout << "*  4. Search Book Data.       *" << "\n" ;
	cout << "*  5. Buy Books.              *" << "\n" ;
	cout << "*  6. Exit.                   *" << "\n" ;
	cout << "*******************************" << "\n" ;
	

		
	int ch ;
	cout << "\nEnter Any Option From Above : " ;
	cin >> ch ;
	
	switch(ch){
		case 1: 
			b.enterData();
			goto back;
		case 2:
			b.editData();
			goto back;
		case 3:
			b.showData();
			goto back;
		case 4:
			b.search();
			goto back;
		case 5:
			b.buy();
			goto back;
		case 6:
			goto exit;
		default:
			cout << "invalid input !! " << "\n\n" ;
			break;
	}	
		
	exit:
		cout << "thanks for visiting, have a nice day ! " << "\n" ;
	
	return 0;
}
