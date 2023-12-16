#include<iostream>
#include<string.h>
using namespace std;

class Market{
	
	char name[20];
	int qty;
	double price;
	static int discount;

	public :
			int number;

		void setMarketdata(){
		
			cout << "Enter item number: ";
			cin >> this->number;
			fflush(stdin);
			cout << "Enter item name: ";
			gets(this->name);  
			cout << "Enter item quantity: ";
			cin >> this->qty;
			cout << "Enter item price: ";
			cin >> this->price;
			cout << endl << endl;
		}
		
		void getMarketdata(){
			
			cout << endl
				 << "number\t" << "name\t" << "quantity\t" << "price\t" << "discount" << endl
				 << "------\t" <<"----\t" << "--------\t" << "-----\t" << "--------" << endl
				 << this->number << "\t" << this->name << "\t" << this->qty << "\t\t" << this->price << "\t" << this->discount << endl << endl;
		}
		
		
};

int Market::discount = 30;
int main(){
	
	int n;
	cout << "Enter number of item: ";
	cin >> n;
	
	Market m[n];
	
	for(int i=0;i<n;i++){
		m[i].setMarketdata();
	}	
	
	char email[20],psw[20];
			fflush(stdin); 
			cout << "Enter login email: ";
			gets(email);
			cout << "Enter login password: ";
			gets(psw);
	int a=0,b=0;		
			for(int i=0;email[i]!='\0';i++){
				if((email[i]>='A'||email[i]<='Z')&&(email[i]>='a'||email[i]<='z')&&(email[i]>='0'||email[i]<='9')){
					a=1;
				}	
			}
		
			for(int i=0;psw[i]!=NULL;i++){
				if((psw[i]=='A'||psw[i]<='Z')&&(psw[i]>='a'||psw[i]<='z')&&(psw[i]>='0'||psw[i]<='9')){
					b=1;
				}
			}
		
			if(a==1 &&b==1){
					cout << "login successfull!!";
				}
			else{
					cout << "login unsuccessfull!!";
				}	
		
		int p;
		if(a==1&&b==1){
			for(int i=0;i<n;i++){
				m[i].getMarketdata();
			}
			
			cout << endl << "Enter item number: ";
			cin >> p;
			
			for(int i=0;i<n;i++){
				if(m[i].number  == p){
					m[i].getMarketdata();
				}
				else{
					cout << "no item found";
				}
			}
		}
}

