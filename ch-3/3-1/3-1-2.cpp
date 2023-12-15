#include<iostream>
#include<string.h>
using namespace std;

class Customer{
	
	int id;
	char name[20];
	int age;
	char city[20];
	long long int mo_number;
	int s_validity;
	char brandName[20];
	
	public: 
		
		void setCustomerData(){
			
			cout << "Enter Customer id: ";
			cin >> this->id;
			fflush(stdin);
			cout << "Enter Customer name: ";
			gets(this->name);
			cout << "Enter Customer age: ";
			cin >> this->age;
			fflush(stdin);
			cout << "Enter Customer city: ";
			gets(this->city);
			cout << "Enter Customer mobile number: ";
			cin >> this->mo_number;
			cout << "Enter Customer sim validity: ";
			cin >> this->s_validity;
			fflush(stdin);
			cout << "Enter Customer simcard company: ";
			gets(this->brandName);
		}
		
		void getCustomerdata(){
			
			cout << endl <<endl 
				 << "id\t\t:" << this->id << endl 
				 << "Name\t\t:" << this->name << endl
				 << "Age\t\t:" << this->age << endl
				 << "City\t\t:" << this->city << endl 
				 << "Mo_number\t:" << this->mo_number << endl 
				 << "Sim validity\t:" << this->s_validity << endl
				 << "Company\t\t:" << this->brandName << endl;
				 
		}
};

int main(){
	
	Customer c1,c2,c3,c4,c5;
	
	c1.setCustomerData();
//	c2.setCustomerData();
//	c3.setCustomerData();
//	c4.setCustomerData();
//	c5.setCustomerData();
	
	c1.getCustomerdata();
//	c2.getCustomerdata();
//	c3.getCustomerdata();
//	c4.getCustomerdata();
//	c5.getCustomerdata();
	
}
