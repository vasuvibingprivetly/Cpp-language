#include<iostream>
using namespace std;

int fact(int n){
	cout << "Enter number: ";
	cin >> n;
	int a;
	
		a = (n*(n-1));
	
	cout << a << endl;
	
	fact(a);
}
int main(){
	int n;
	fact(n);
}
