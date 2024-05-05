#ifndef__PERSON__
#define__PERSON__


struct Person{

protected:
    int Id;
    string Name;

public:
   Person(int _a, sring_b)
   {
       Id= _a;
       Name= _b;
   }

   void virtual display(){
       cout<<" Id ="<< Id
           <<", Name ="<< Name<< endl;
   }
};
#endif
