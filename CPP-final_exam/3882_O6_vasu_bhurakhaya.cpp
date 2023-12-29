//Write a Program which illustrates Method Overriding by using two classes.


#include<iostream>
using namespace std;

class A{
	
	public : 
		void setA(){
			cout << "CPP\t C ";
		}
};

class B : public A{
	public : 
		void setB(){
			cout << "CPP\t C ";
		}
};

int main(){
	B obj1;
	obj1.setB();
}
