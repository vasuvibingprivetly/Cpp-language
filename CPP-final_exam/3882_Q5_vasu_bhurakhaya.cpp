#include<iostream>
using namespace std;

class Hotel{
	int number;
	char name[20];
	char type[20];
	int rate;
	char location[30];
	
	public : 
		Hotel(int n,char n1[],char n2[],int n3,char n4){
			this->number = n;
	        strcpy(this->name,n1);
	        strcpy(this->type,n2);
	        this->rate = n3;
	        strcpy(this->location,n4);
	
	        cout << "hotel number : " << n << endl
	             << "hotel name : " << n1 << endl
	             << "hotel type : " << n2 << endl
	             << "hotel Rate : " << n3 << endl
	             << "hotel Location : " << n4 << endl;
		}
		
		void setHoteldata(){
		    cout << "Enter hotel number : ";
		    cin >>this->number;
		    cout << "Enter hotel name : ";
		    gets(this->name);
		    cout << "Enter hotel type : ";
		    cin >> this->type;
		    cout << "Enter hotel rating : ";
		    cin >> this->rate;
		    cout << "Enter hotel location : ";
		    gets(this->location);
		}
};

int main(){
	Hotel obj1;
	
	obj1.setHoteldata();
}
