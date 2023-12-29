#include<iostream>
using namespace std;

class num(){
	public :
		int a;
		int b;
		
	void set(){
			
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	
	cout << a/b;
		
	}
	
	void get(){
		try(a/b){
 			throw(b==0){
				cout << "error";
			}
		}catch(){
			cout << "number can't divid by zero!";
		}
	}
		
};
int main(){
	num obj1;
		
		
}
