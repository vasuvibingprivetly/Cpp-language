#include<iostream>
#include<string.h>
using namespace std;

class Student{
	
	int id;
 	char name[20];
	int age;
	char course[20];
	char city[20];
	char email[20];
	char college[20];

	public :
		
		void setStudentData(){
			cout << endl << endl;
			cout << "Enter student id: ";
			cin >> this->id;
			fflush(stdin);
			cout << "Enter student name: ";
			gets(this->name);
			cout << "Enter student age: ";
			cin >> this->age;
			fflush(stdin);
			cout << "Enter student course: ";
			gets(this->course);
			cout << "Enter student city: ";
			gets(this->city);
			cout << "Enter student email: ";
			gets(this->email);
			cout << "Enter student college: ";
			gets(this->college);
		}
		
		void getStudentData(){
			cout << endl 
				 << "id\t: " << this->id << endl
				 << "name\t: " << this->name << endl 
				 << "age\t: " << this->age << endl
				 << "course\t: " << this->course << endl
				 << "city\t: " << this->city << endl 
				 << "email\t: " << this->email << endl 
				 << "college\t:" << this->college << endl;
		}
		
};

int main (){
	
	Student s1,s2,s3,s4,s5;
	
	s1.setStudentData();
	s2.setStudentData();
	s3.setStudentData();
	s4.setStudentData();
	s5.setStudentData();
	
	s1.getStudentData();
	s2.getStudentData();
	s3.getStudentData();
	s4.getStudentData();
	s5.getStudentData();
}
