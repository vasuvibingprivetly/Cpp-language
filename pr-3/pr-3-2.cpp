#include<iostream>
using namespace std;

class Number{
	protected: 
		int n;
		
	public :
		void setnumberdata(){
			cout << "Enter n: ";
			cin >> n; 
		}
};

class Square : public Number{
	
	public :
		void getSquare(){
			cout << endl << "Square\t: " << (n*n) << endl;
		}
};

class Cube : public Number{
	
	public :
		void getCube(){
			cout << endl << "Cube\t: " << (n*n*n) << endl;
		}
};

main(){
	
	Square obj1;
	Cube obj2;
	
	obj1.setnumberdata();
	obj1.getSquare();
	
	obj2.setnumberdata();
	obj2.getCube();
}
