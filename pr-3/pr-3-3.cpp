#include<iostream>
#include<string.h>
using namespace std;

class A{
	protected: 
		int id;
		char name[20];
		char role[20];
	
		
	public: 
	
		void setAdata(){
			cout << "Enter id: ";
			cin >> this->id;
			fflush(stdin);
			cout << "Enter name: ";
			gets(this->name);
			cout << "Enter role: ";
			gets(this->role);
		}	
};

class B : public A{
	
	protected: 
		long int salary;
		int experience;
		
	public : 
		void setBdata(){
			cout << "Enter salary: ";
			cin >> this->salary;
			cout << "Enter experience: ";
			cin >> this->experience;
		}
};

class C : public B {
	
	protected:
		char comp_name[20];
		char address[40];
		
	public :
		void setCdata(){
			fflush(stdin);
			cout << "Enter company name: ";
			gets(this->comp_name);
			cout << "Enter address: ";
			gets(this->address); 
		}
		
		void getCdata(){
			cout << endl << endl 
				 << "NAME\t\t:" <<this->name << endl
				 << "ROLE\t\t:" <<this->role << endl
				 << "SALARY\t\t:" <<this->salary << endl;
 		}
};

class D : public C {
	
	protected: 
		char email[20];
		long long int contact;
		
	public :
		void setDdata(){
			cout << "Enter email: ";
			gets(this->email);
			cout << "Enter contact: ";
			cin >> this->contact;
		}
		
		void getDdata(){
			cout << endl << endl << endl 
			cout << "ID\t\t:" << this->id << endl
				 << "NAME\t\t:" <<this->name << endl
				 << "ROLE\t\t:" <<this->role << endl
				 << "SALARY\t\t:" <<this->salary << endl
				 << "EXPERIENCE\t:" <<this->experience << endl
				 << "COMPANY NAME\t:" <<this->comp_name << endl
				 << "ADDRESS\t\t:" <<this->address << endl 
				 << "EMAIL\t\t:" <<this->email << endl
				 <<"CONTACT\t\t:" <<this->contact << endl;
		}
}; 

int main(){
	
	D obj1;
	
	obj1.setAdata();
	obj1.setBdata();
	obj1.setCdata();
	obj1.setDdata();
	
  //obj1.getCdata();
	obj1.getDdata();
}
