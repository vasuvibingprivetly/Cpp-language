#include<iostream>
using namespace std;
main(){
	int n;
	cout << "Enter array size :";
	cin >> n;
	
	int a[n],i;
	
	cout << "Enter array element :\n";
	for(i=0;i<n;i++){
		cout << "A[" << i << "] :";
		cin >> a[i];	
		}
	cout << "Squre of all element : ";
	for(i=0;i<n;i++){
		cout << a[i]*a[i] << ",";
	}	
}
