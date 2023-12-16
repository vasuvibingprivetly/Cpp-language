#include<iostream>
#include<string.h>
using namespace std;

class Hotel{

	int id;
	char name[20];
	char type[20];
	char rating[20];
	char location[20];
	int esta_year;
	int staff_qty;
	int room_qty;
	
	public:
		void setHotelData(){
			cout << endl;
			cout << "Enter Hotel id: ";
			cin >> this->id;
			fflush(stdin);
			cout << "Enter Hotel name: ";
			gets(this->name);
			cout << "Enter Hotel type: ";
			gets(this->type);
			cout << "Enter Hotel rating: ";
			gets(this->rating);
			cout << "Enter hotel location: ";
			gets(this->location);
			cout << "Enter Hotel establish year: ";
			cin >> this->esta_year;
			cout << "Enter Hotel staff quantity: ";
			cin >> this->staff_qty;
			cout << "Enter Hotel room quantity: ";
			cin >> this->room_qty;
		}
		
		void getHotelData(){
			
			cout << endl << endl 
				 << "Id\t\t:" << this->id << endl
				 << "Name\t\t:" << this->name << endl
				 << "Type\t\t:" << this->type << endl 
				 << "Rating\t\t:" << this->rating << endl
				 << "Location\t:" << this->location << endl
				 << "Establish year\t:" << this->esta_year << endl 
				 << "Staff quantity\t:" << this->staff_qty << endl
				 << "Room quantity\t:" << this->room_qty << endl;
 		}
 		
};

int main(){
	
	int n;
	cout << "Enter number of hotel :";
	cin >> n;
	
	Hotel h1[n];
	
	for(int i=0;i<=n;i++)
			h1[i].setHotelData();
			
	for(int i=0;i<=n;i++)
			h1[i].getHotelData();			
}
