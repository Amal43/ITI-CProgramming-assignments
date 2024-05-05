#include"person.h"

struct Employee : Person
{
private:
    string Hiringdate;

public:
    Employee(int _a, string _b,string _c)
    :Person(_a, _b)
    {
        Hiringdate =_c;
    }
    void display()
    {
       cout<<" Id ="<< Id
           <<", Name ="<< Name
           <<", Hiring Date="<<Hiringdate<< endl;
    }

};
