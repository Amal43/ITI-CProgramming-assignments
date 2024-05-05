#include <iostream>
using namespace std;

 struct Trainee
 {
        private:

            static int ID;
            int Id;
            char* Name;
            int Age;

        public:



            Trainee(){
             ID++;
             Id = ID ;
             this->Name ="Ali";
             Age=25;
            }

            Trainee(int _a , char *_b ,int _c)
            {
              Id = _a;
              Name = _b;
              Age = _c;
            }


           /* void setAge(int A)
            {
                Age =A;
            }

            void setName(char*N){
                Name=N;
            }

            int getId(){
              return Id;
            }

            char *getName(){
              return Name;
            }

             int getAge(){
              return Age;
            } */


            void display(){
                cout<<"ID:"    << this->Id
                    <<", Name:"<< this->Name
                    <<", Age:" << this->Age << endl;
            }

            ~Trainee(){
             cout<< 'dying' <<endl;
            }

 };
 int Trainee::ID = 0;


template <typename F >
F sum(F  a, F  b)
{
    return a+b;
}



int main()
{

    Trainee T1;
    T1.display();

    Trainee T2;
    T2.display();

    Trainee T3(4, "Amal" ,23);
    T3.display();



   cout<< sum<double>(3.4 ,6.2)<<endl;
   cout<< sum<int>(3,7)<<endl;







    return 0;
}
