#include<iostream>
using namespace std;

main(){
	int n;
	cout << "Enter array size: ";
	cin >> n;
	
	cout << "Enter array element: \n"; 
	int i,a[n];
	for(i=0;i<n;i++){
		cout << "A[" << i <<"] : ";
		cin >> a[i];
	}
	cout << "Even element of array: ";
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			cout << a[i] << ",";
		}
	}
}
