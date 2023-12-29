#include <iostream>
using namespace std;

class A1{
public:
    virtual void set()
    {
        cout << "master in flutter" << endl;
    }
};

class A2: public virtual A1{
public:
    void set1()
    {
        cout << "C" << endl;
    }
};

class A3: public virtual A1{
public:
    void set2()
    {
        cout << "Cpp" << endl;
    }
};

class A4 : public A2, public A3{
public:
    void set3()
    {
        cout << "Core flutter" << endl;
    }
};

int main(){
   A4 obj1;

    obj1.set();
    obj1.set1();
    obj1.set2();
    obj1.set3();

    
}

