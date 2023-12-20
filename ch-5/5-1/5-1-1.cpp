#include<iostream>
using namespace std;
class Arithmetic{
	

	public: 
	void arith(int a,int b){
		cout << "Division: " << (a/b)<< endl;
	}
	
	void arith(int a,int b,int c){
		cout << "Substraction: " << (a-b-c)<< endl;
	}
	
	void arith(int a,int b, int c,int d){
		cout << "Multiplication: " << (a*b*c*d) << endl;
 	}
 	
 	void arith(int a,int b,int c,int d,int e){
 		cout << "Addition: " << (a+b+c+d+e)<< endl;
	 }
 	
};


main(){
	Arithmetic a1;
	
	a1.arith(10,20);	
	a1.arith(80,20,30);
	a1.arith(6,2,3,5);
	a1.arith(10,20,37,90,89);
	
}
