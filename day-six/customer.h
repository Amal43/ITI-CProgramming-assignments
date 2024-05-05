#include"employee.h"

struct Customer:Person
{
private:
    int isblocked;
public:
    Customer(int _a, string _b,int _d)
     :Person(_a, _b)
    {
        isbloked =_d;
    }
    void display()
    {
       cout<<" Id ="<< Id
           <<", Name ="<< Name
           <<", Boolean ="<<isbloked<< endl;
    }



};

