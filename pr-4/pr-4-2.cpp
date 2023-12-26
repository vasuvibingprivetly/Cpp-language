#include<iostream>
#include<string.h>
using namespace std;

class Dis{
    public:
    	
        int km,m;
        
        void setdata(){
            cout << "Enter Kilometer : "; 
			cin >> km;
            cout << "Enter Meter : ";
		    cin >> m;
        }
        
        
        Dis operator+(Dis n){
        
		        Dis k;
                k.km=(m+n.m)/1000;
                k.km+=(km + n.km);
                k.m=(m+n.m)%1000;
                return k;
        }
        
        
        void getdata(Dis a){
        	
            cout << "**Kilometer\t: " << a.km; 
			cout << "**Meter\t: " << a.m << endl << endl;
        }
};

int main()
{
    Dis n1, n2, n3;
    cout << endl << "Enter first values: " << endl;
    n1.setdata();
    cout << endl << "Enter second values: " << endl;
    n2.setdata();
    n3 = n1 + n2;
    n3.getdata(n3);
    return 0;
}
