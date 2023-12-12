#include<iostream>
using namespace std;

class student{
	
	private://private access modifier don't allows to use in main function.to sequre the program.  
		int student_id;
		char name[20];
		int age;
	
	public://public access modifier gives permission to use in main function.
		int roll_no;
		char surename[20];
		int standard;
		
};

int main(){
	student a1;// in this line student is a class and a1 is object.
	
	cout << "Enter roll no: ";
	cin >> a1.roll_no;
	fflush(stdin);
	cout << "Enter surename: ";
	gets(a1.surename);
	cout << "Enter standard: ";
	cin >>a1.standard;
	
	//this attributes are store in public class so we can use it & access it. 

/*  cout << "Enter id:";
	cin >> a1.;//as syntax we write the a1. but student class don't allows to use attribute of id.
	cout << "Enter name";
	gets(a1.);//as syntax we write the a1. but student class don't allows to use attribute of name.
	cout << "Enter age:";
	cin >>a1.;//as syntax we write the a1. but student class don't allows to use attribute of age.
*/	

		//this attributes are store in public class so we can use it & access it. 

}
