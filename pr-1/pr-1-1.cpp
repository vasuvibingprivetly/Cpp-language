#include<iostream>
using namespace std;

class dis{
	public:
	int feet;
	int inch;
};

int main(){
	dis n1;
	dis n2;
	dis n;
	
	
	cout << "Enter 1st feet: ";
	cin >> n1.feet;
	cout << "Enter 1st inch: ";
	cin >> n1.inch;
	cout << "Enter 2nd feet: ";
	cin >> n2.feet;
	cout << "Enter 2nd inch: ";
	cin >> n2.inch;
	
	n.feet = n1.feet + n2.feet;
	n.inch = n1.inch + n2.inch;
	
	if(n.feet>=12){
		n.inch-=12;
		n.feet++;
	}
	
	cout << "feet: " <<n.feet << "inch :" << n.inch;
}
