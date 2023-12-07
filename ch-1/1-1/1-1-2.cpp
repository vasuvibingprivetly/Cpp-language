#include<iostream>
using namespace std;
main(){
	int n1,n2,n=0;
	cout << "Enter strating year: ";
	cin >> n1;
	cout << "Enetr ending year: ";
	cin >> n2;
	
	int i,a[n];
	for(i=n1;i<=n2;i++){
		if(i%4==0){
			cout << i << ",";
			n++;
		}
	}
}
