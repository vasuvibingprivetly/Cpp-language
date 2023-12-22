#include<iostream>
using namespace std;

class Cricket{
	
	protected: 
		int a;
};

class Testmatch : public Cricket{
	public: 
		void getTotalover(int a){
			cout << "over of Testmatch: " << a << endl;
		}
};

class T20match : public Cricket{
	public: 
		void getTotalover(int a){
			cout << "over of T20match: " << a << endl;
		}
};

int main(){

	Testmatch obj1;
	T20match obj2;
	
	obj1.getTotalover(90);	
	obj2.getTotalover(20);
}
