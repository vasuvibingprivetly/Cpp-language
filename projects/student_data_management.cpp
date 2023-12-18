#include<iostream>
#include<string.h>
using namespace std;
	

class Student{
	private:
		           
	char name[20];
	int m1;
	int m2;
	int m3;
	int sum;
	int per;
	
	
	public: 
		int id;
				
		void setStudentdata(){
			cout << endl << "Enter student id: "; 
			cin >> this->id;
			fflush(stdin);
			cout << "Enter student name: ";
			gets(this->name);
			cout << "Enter student marks 1: ";
			cin >> this->m1;
			cout << "Enter student marks 2: ";
			cin >> this->m2; 
		    cout << "Enter student marks 3: ";
			cin >> this->m3;
			                
		}
		
		void getStudentdata(){
			cout << endl << endl; 
				
			cout <<"id\t"<<"name\t"<<"m1\t"<<"m2\t"<<"m3"<<endl;
			cout <<this->id<<"\t"<<this->name<<"\t"<<this->m1<<"\t"<<this->m2<<"\t"<<this->m3<<endl;
			this->sum=this->m1+this->m2+this->m3;
			    this->per=this->sum*100/300;
		}
		
		void getResult(){
			cout << "RRRR  EEEEE  SSSS  U  U  LL    TTTTTT" <<endl
				 << "R  R  E      S     U  U  LL      TT " <<endl
				 << "RRR   EEEEE  SSSS  U  U  LL      TT" << endl
				 << "R R   E         S  U  U  LL      TT" <<endl
				 << "R  R  EEEEE  SSSS  UUUU  LLLLL   TT" <<endl;
				 
			cout << "||---------------RESULT---------------||"<<endl
				 << "||                                    ||"<<endl
				 <<	"||ID\t:"<<this->id<<                 "||"<<endl
				 << "||NAME\t:"<<this->name<<             "||"<<endl
				 << "||marks1\t:"<<this->m1<<             "||"<<endl
				 << "||marks2\t:"<<this->m2<<             "||"<<endl
				 << "||marks3\t:"<<this->m3<<             "||"<<endl
				 << "||                                    ||"<<endl
				 << "||              TOTAL :"<<this->sum<<"||"<<endl
				 << "||                                    ||"<<endl
				 << "||                      PERCENTAGE    ||"<<endl
				 << "||                   ---------------- ||"<<endl
				 << "||                 "<<this->per <<   "||"<<endl
				 << "||                                    ||"<<endl
				 << "||------------------------------------||"<<endl;
		}
};




int main(){
	Student s[100];
	
char email[30]= "jayneshsir@email.com";
	char psw[20]= "jayneshsir123";
	char e_login[30];
	char p_login[20];
	
		cout << "Enter email for login :";
		gets(e_login);
		cout << "Enter password for login: ";
		gets(p_login);
		
		int a=0,b=0,c=0;
		for(int i=0;email[i]!=NULL,psw[i]!=NULL;i++){
			if(email[i]==e_login[i]){//email
			 	a=1;
			}
			else{
				a=2;
			}
			if(psw[i]==p_login[i]){//password
				b=1;
			}
			else{
				b=2;
			}
		}
			
		if(a==1 && b==1){
			cout << "Login successfull!!";
			c=1;
		}
		else{
			cout << "Login unsuccessfull!!";
			c=2;
		}
	
		
		if(c==1){
			int n,i;
			cout << endl << endl <<"Enter number of student: ";
			cin >> n;
		
		
			for(i=0;i<n;i++)
			{
				s[i].setStudentdata();
			}
		}
		
		cout << endl << "---IF YOU WANT TO CREATE STUDENT MARKSHEET---";
	
	
	next:
	int x;	
	cout << "[1]..Marksheet"<< endl
		 << "[2]..Result" << endl
		 << "[3]..Topper" << endl;
	cout << "Enter what you want :";
	cin >> x;
	
	  int p, i, n;

    switch (x) {
    case 1:
        cout << "Enter student id: ";
        cin >> p;
        for (i = 0; i < n; i++) {
            if (s[i].id==p) {
                s[i].getStudentdata();
                goto next;
			}
		}
	}
}
