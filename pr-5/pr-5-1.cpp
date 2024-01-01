#include <iostream>
using namespace std;

class A{
    int a,b;
    string n = "can't divisible by zero";

	public:
   		 A(){
	        cout << "Enter a : ";
	        cin >> a;
	        cout << "Enter b : ";
	        cin >> b;
	
	        try{
	            if(a==b){
	                throw 1;
				}
	            else if (b!=0){
	                throw a/b;
	            }
	
	            else{
	                throw n;
	          	}
	        }
	        catch (int a){
	            cout << "output: " << a ;
	        }
	        catch (string a){
	            cout << a << endl;
	        }
	        catch (string b){
	            cout << "equal : 1=1";
	        }
	    }
};

int main()
{
    A obj1;

}
