#include<iostream>
#include<string.h>
using namespace std;

main(){
	char str[30];
	
	cout<< "Enter string :";
	gets(str);
	
	for(int i=0; str[i]!=NULL; i++){
		if(str[i]>=56 && str[i]<=90){
			str[i]+=32;
		}
		else if(str[i]>=97 && str[i]<=122){
			str[i]-=32;
		}
	}
	for(int i=0; str[i]!=NULL; i++){
		cout << str[i];
	}
	
}   
