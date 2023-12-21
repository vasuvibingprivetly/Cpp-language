#include<iostream>
using namespace std;

class Cricket{
	public: 
		void getTotalover(int a){
			cout << "Total over of match: " << a << endl;
		}
};

class Testmatch : public Cricket{
	public: 
		void getTotalover(int a){
			cout << "match over's: " << a << endl;
		}
};

int main(){

	Testmatch obj1;
	
	obj1.getTotalover(5);	
}
