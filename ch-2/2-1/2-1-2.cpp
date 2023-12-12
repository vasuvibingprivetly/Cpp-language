#include<iostream>
using namespace std;
#include<string.h>
class car{
	public :
		int id;
		char c_name[20];
		char color[20];
		char model[20];
		int r_year;
};

int main(){
	car c1,c2,c3,c4;
	
	cout << "[1]";
	cout << "Enter  car id: ";
	cin >> c1.id;
	fflush(stdin);
	cout << "Enter company name: ";
	gets(c1.c_name);
	cout << "Enter car color: ";
	gets(c1.color);
	cout << "Enter car model: ";
	gets(c1.model);
	cout << "Enter car release year: ";
	cin >> c1.r_year;
	
	cout << endl << "[2]";
	cout << "Enter  car id: ";
	cin >> c2.id;
	fflush(stdin);
	cout << "Enter company name: ";
	gets(c2.c_name);
	cout << "Enter car color: ";
	gets(c2.color);
	cout << "Enter car model: ";
	gets(c2.model);
	cout << "Enter car release year: ";
	cin >> c2.r_year;
	
	cout << endl <<"[3]";
	cout << "Enter  car id: ";
	cin >> c3.id;
	fflush(stdin);
	cout << "Enter company name: ";
	gets(c3.c_name);
	cout << "Enter car color: ";
	gets(c3.color);
	cout << "Enter car model: ";
	gets(c3.model);
	cout << "Enter car release year: ";
	cin >> c3.r_year;
	
	cout << endl << "[4]";
	cout << "Enter  car id: ";
	cin >> c4.id;
	fflush(stdin);
	cout << "Enter company name: ";
	gets(c4.c_name);
	cout << "Enter car color: ";
	gets(c4.color);
	cout << "Enter car model: ";
	gets(c4.model);
	cout << "Enter car release year: ";
	cin >> c4.r_year;
	
	
	cout << "Car id\t" << "company name\t" << "car color\t" << "car model\t" << "release year" << endl ;
	cout << c1.id <<"\t" << c1.c_name <<"\t"<< c1.color <<"\t" << c2.model <<"\t"<< c2.r_year <<endl;
	cout << c2.id <<"\t" << c2.c_name <<"\t"<< c2.color <<"\t" << c2.model <<"\t"<< c2.r_year <<endl;
	cout << c3.id <<"\t" << c3.c_name <<"\t"<< c3.color <<"\t" << c3.model <<"\t"<< c3.r_year <<endl;
	cout << c4.id <<"\t" << c4.c_name <<"\t"<< c4.color <<"\t" << c4.model <<"\t"<< c4.r_year <<endl;

}


