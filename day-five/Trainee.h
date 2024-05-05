
struct Trainee
{
    private:
        int Id;
        string Name;
        int *Phone;
        int index;

    public:

        Trainee( const Trainee  &T){

        this->Id = T.Id;
        this->Name = T.Name;
        Phone = new int[3];
         index= T.index;

         for(int i=0 ; i<3 ; i++)
        {
           Phone[i]=T.Phone[i];

        }


        }

        Trainee(int _a ,string _b){
          Id = _a;
          Name = _b;
          Phone = new int[3] ;
          index = 0;
        }


        void Addphone(int p){
             Phone[index]= p;
             index++;
        }


        void display()
        {
            cout<<"Id:"<<Id
                <<", Name:"<< Name<<endl;
            for(int i=0 ; i<3 ; i++)

             cout<< Phone[i]<<endl;
        }


        ~Trainee(){
            delete []Phone;

        }


};
