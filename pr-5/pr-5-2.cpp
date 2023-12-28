#include<iostream>
using namespace std;

class A{
	protected :
		int age;
//		char error[50] =  "You are eligible for vote!!";

		string error= "Eligible for vote!!";
		public :
			A()
			{	
				cout << "Enetr your age: ";
				cin >> age;	
				
				try{
					if(age>18){
						throw error;
					}
					else{
						throw false;
					}			
				}catch (bool e){
					cout << endl << "you are not eligible for vote!!";
				}catch(string error){
					cout << error << endl;
				}
		}
};
int main(){
	A a1;
	
}
