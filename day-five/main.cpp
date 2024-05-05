#include <iostream>
using namespace std;

#include "Trainee.h"

int main()
{



   Trainee T1 = Trainee(1,"ITI");
   T1.Addphone(7777);
   T1.Addphone(9999);
   T1.display();


   Trainee T2 = T1;
   T2.Addphone(5467);
   T2.display();
   T2.display();





    return 0;
}
