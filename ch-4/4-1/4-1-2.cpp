#include<iostream>
#include<string.h>
using namespace std;

class P{
	protected :
		float temprature;
	void celcius(){

		cout << "Enter Temprature: ";
		cin >> this->	temprature;
	}
};

class Q : public P{
	public:
	int f;
	
	void tofehrenhit(){
	
	     	f=(temprature*(p/5))+32;
		cout << "Celcius converted into Fernheit: " << f << endl;
	}
};

class R : public Q{
	public:
   		int k;
	
	void tokelvin(){
		
	     	k = (f - 32) × 5 / 9 + 273.15;
		cout << "Fehrenhit converted into Kelvin: " << k << endl;     	
	}
};

int main(){
	R obj;
	obj.tofehrenhit();
	obj.tokelvin();
}
