#include<iostream>
#include<string.h>
using namespace std;

class Railway{
	
	int number;
	char name[20];
	char source[20];
	char destination[20];
	char time[20];
	
	public: 
		void setRailwaydata(){
			
			cout << "Enter train number: ";
			cin >> this->number;
			fflush(stdin);
			cout << "Enter train name: ";
			gets(this->name);
			cout<< "Enter train source: ";
			gets(this->source);
			cout << "Enter destination: ";
			gets(this->destination);
			cout << "Enter train time: ";
			gets(this->time);
			cout << endl << endl;
		}
		
		void getRailwaydata(){

				cout << endl << endl;
				cout << "number\t" << "name\t" << "source\t" << "destintion\t" << "time\t" << endl;
				cout << "------\t" << "----\t" << "------\t" << "----------\t" << "----\t" << endl;
				cout << this->number << "\t" << this->name << "\t" << this->source << "\t" << this->destination << "\t\t" << this->time;
				
		}
};

int main(){
	
	Railway r1,r2,r3;
	
	r1.setRailwaydata();
	r2.setRailwaydata();
	r3.setRailwaydata();
	
	r1.getRailwaydata();
	r2.getRailwaydata();
	r3.getRailwaydata();
	
	int n;
	next:
	cout << endl << endl;
	cout << "Enter train number : ";
	cin >> n;
	

	switch(n){
		case 1: 
			r1.getRailwaydata();
			goto next;
		case 2:
			r2.getRailwaydata();
			goto next;
		case 3:		
			r3.getRailwaydata();
			goto next;
		default:
			break;	
	}
}
