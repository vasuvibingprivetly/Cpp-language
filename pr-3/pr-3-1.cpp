#include<iostream>
#include<string.h>
using namespace std;

class Shape{
	
	protected :
		double height;
		double width;
		
	public :
		
		void setShapedata(){
			cout << "Enter height: ";
			cin >> height;
			cout << "Enter width: ";
			cin >> width;
		}	
};

class Tringle : public Shape{
	
	public:
		void getTringle(){
	  		cout << endl << "Tingle: " << ((1/2)*height*width) << endl;
		}
};

class Rectangle : public Shape{
	
	public: 
		void getRectangle(){
			cout << endl << "Rectangle: " << (height*width) << endl;
		}
};

int main(){
	
	Tringle obj1;
		obj1.setShapedata();
		obj1.getTringle();
	Rectangle obj2;
		obj2.setShapedata();
		obj2.getRectangle();	
}
