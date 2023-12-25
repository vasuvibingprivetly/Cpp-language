#include<iostream>
#include<string.h>
using namespace std;

class Message{
	
	private : 
		string s = "hello";
		string s2;
		
	public : 
		Message(string s1){
			s2 = s;
			cout << s1;
		}
		
		void getAdata(){
			cout << " " << this->s << endl;
			
		}		
};

int main(){
	char n[20];
	
	cout <<  "Enter string: ";
	gets(n);
	
	Message obj1(n);
	
	obj1.getAdata();
}
