#include<iostream>
#include<string.h>
using namespace std;

class Bank{
	
	char ac_name[20];
	char ac_type[20];
	char ac_branch[20];
	int ac_balance;
	
	public:
		int ac_number;
	
		void setBankdata(){
			cout << "Enetr account number: ";
			cin >> ac_number;
			fflush(stdin);
			cout << "Enter account name: ";
			gets(this->ac_name);
			cout << "Enter account type: ";
			gets(this->ac_type);
			cout << "Enter account branch: ";
			gets(this->ac_branch);
			cout << "Enter account balance: ";
			cin >> ac_balance;	
		}
	
		void getBankdata(){
			cout << endl << endl <<" account number " << this->ac_number;
			cout << endl << " account name " << this->ac_name;
			cout << endl << " account type " << this->ac_type;
			cout << endl << " account branch " << this->ac_branch;
			cout << endl << " account balance " << this->ac_balance;
		
		}
	
	
};

int main()
{
	
}

