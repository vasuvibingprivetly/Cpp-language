#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	
	public :
		
	int id;
       char name[20];
       int age;
       char role[20];
       int salary;
       char city[20];
       int experience;
       char companyname[20];

};
int main(){
	Employee e1,e2,e3,e4,e5;
	
	cout << "Enter id" << endl;
	cin >>  e1.id;
	cout << " Enter name:" << endl;
	gets(e1.name);
	cout << "Enter age:" << endl;
	cin >> e1.age;
	cout << " Enter role :" << endl;
	gets(e1.role);
	cout << "Enter salary:" << endl;
	cin >>  e1.salary;
	cout << " Enter city:" << endl;
	gets(e1.city);
	cout << "Enter experience year:" << endl;
	cin >>  e1.experience;
	cout << " Enter  company name:" << endl;
	gets(e1.companyname);
	
	
	
}

