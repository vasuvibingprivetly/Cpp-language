#include<iostream>
#incude<string.h>
using namespace std;

class Market{
	
	int number;
	char name[20];
	int qty;
	double price;
	static int discount;

	public :
		void setMarketdata(){
		
			cout << "Enter item number: ";
			cin >> this->number;
			fflush(stdin);
			cout << "Enter ite name: ";
			gets(this->name);  
			cout << "Enter item quantity: ";
			cin >> this->qty;
			cout << "Enter item price: ";
			cin >> this->price;
			cout << endl << endl;
		}
		
		void getMarketdata(){
			
			cout << endl
				 << "number\t" << "name\t\t" << "quantity\t" << "price\t" << "discount" << endl;
				 << "------\t----\t--------\t-----" << endl;
				 << this->number << "\t" << this->name << "\t\t" << this->qty << "\t" << this->price << "\t" << this->discount;
		}
		
		
};

int Market::discount = 30;
int main(){
	
	int n;
	cout << "Enter number of item";
	cin >> n;
	
	Market m[n];
	
	for(int i=0;m[i]<=n;i++){
		m[i].setMarketdata();
	}	
	
	char email[20],psw[20];
			
			cout << "Enter login email: ";
			gets(email);
			cout << "Enter login password: ";
			gets(psw);
	int a=0,b=0;		
			for(int i=0;email[i]!=NULL;i++){
				if(email[i]=='A'||email[i]=='Z'&&email[i]=='a'||email[i]=='z'&&email[i]==48||email[i]==57){
					cout << "login successfull!!";
					a=1;
				}
				
				else{
					cout << "login unsuccessfull!!";
				}	
			}
		
			for(int i=0;psw[i]!=NULL;i++){
				if(psw[i]=='A'||psw[i]=='Z'&&psw[i]=='a'||psw[i]=='z'&&psw[i]==48||psw[i]==57){
					cout << "login successfull!!";
					b=1;
				}
				else{
					cout << "login unsuccessfull!!";
				}	
		}
		
		
		if(a==1&&b==1){
			for(int i=0;m[i]<=n;i++){
				m[i].getMarketdata();
			}
			
			cout << "Enter item number: ";
			cin >> p;
			
		}
}

