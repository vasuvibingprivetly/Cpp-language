#include <iostream>
using namespace std;

class Admin
{
private:
    long int tar;

protected:
    int salary;
    int staff;
    int m_salary;
    bool fired;

public:
    static char c_name[20];

    static void set_cname()
    {
        cout << "Enter company name : ";
        gets(c_name);
        cout << c_name;
    }
};

char Admin::c_name[20] = "Xyz Company";

class Manager : public Admin
{
public:
};


int main()
{

    Admin obj1;
    obj1.set_cname();
    
}

