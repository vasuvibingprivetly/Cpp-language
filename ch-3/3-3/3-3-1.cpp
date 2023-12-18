#include<iostream>
#include<string.h>
using namespace std;

class Diamond{
	int id;
	char name[20];
	int s_qty;
	int revenue;
	int i_diamond;
	int e_diamond;
	char ceo[20];
	
	Diamond(int n,char s[],int a,int b,int c, int d,char e[]){
		this->id = n;
		strcpy(this->name,s);
		this->s_qty = a;
		this->revenue = b;
		this->i_diamond = c;
		this->e_diamond = d;
		strcpy(this->ceo,e);
		
		cout << "id\t: " 
		cin	 >> this->id 
		cout << "name\t: " 
		gets(this->name);
			 << "staff quantity\t: " << this->s_qty << endl
			 << "revenue\t\t: " << this->revenue << endl
			 << "import diamond\t: " << this->i_diamond << endl
			 << "export diamond\t: " << this->e_diamond << endl
			 << "ceo\t\t: " << this->ceo << endl;
		
	}
};

int main(){

}
