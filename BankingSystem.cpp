#include<iostream>

#include<conio.h>

#include<windows.h>

using namespace std;

class Bank{

	private: 

	    int total;

	    string id;

	    struct person{

	    	string name,ID,address;

	    	int contact,cash;

		}person[100];

	public:

		Bank(){

			total=0;

		}

		void choice();

		void perData();

		void show();

		void update();

		void search();

		void transactions();

		void del();

};

int main(){

	Bank b;

	b.choice();

	return 0;

}

void Bank::choice(){

	char ch;

	while(1){

	cout<<"\n\nPRESS..!!"<<endl;

	cout<<"1. Create new account"<<endl;

	cout<<"2. View customers list"<<endl;

	cout<<"3. Update information of existing account"<<endl;

	cout<<"4. Check the details of an existing account"<<endl;

	cout<<"5. For transactions"<<endl;

	cout<<"6. Remove existing account"<<endl;

	cout<<"7. Exit"<<endl;

	ch=getch();

	system("CLS");

	switch(ch){

		case '1':

			Bank::perData();

			break;

		case '2':

			if(total==0){

				cout<<"No data is entered"<<endl;

			}else{

			Bank::show();

		   }

			break;

		case '3':

			if(total==0)

			cout<<"No data is entered"<<endl;

			else

			Bank::update();

			break;

		case '4':

			if(total==0)

			cout<<"No data is entered"<<endl;

			else

			Bank::search();

			break;

		case '5':

			if(total==0)

			cout<<"No data is entered"<<endl;

			else

			Bank::transactions();

			break;

		case '6':

			if(total==0)

			cout<<"No data is entered"<<endl;

			else

			Bank::del();

			break;

		case '7':

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

    }

}

void Bank::perData(){

	cout<<"Enter data of person "<<total+1<<endl;

	cout<<"Enter name: ";

	cin>>person[total].name;

	cout<<"ID: ";

	cin>>person[total].ID;

	cout<<"Address: ";

	cin>>person[total].address;

	cout<<"Contact: ";

	cin>>person[total].contact;

	cout<<"Total Cash: ";

	cin>>person[total].cash;

	total++;

}