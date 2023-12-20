#include<iostream>
using namespace std;

class X{
	protected :
		int a;
		int b;
		int c;
		
	
};

class Y : public X{
	public :
		void setData(){

			cout << "Enter a: ";
			cin >> a;
			cout << "Enter b: ";
			cin >> b;
			cout << "Enter c: ";
			cin >> c;
		
	}
	
	void getData(){
		cout << "SUM : " << (a*a*a)+(b*b*b)+(c*c*c);	
	}
	
};

int main(){
	Y obj1;
	obj1.setData();
	obj1.getData();	
}
