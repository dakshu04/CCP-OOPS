    #include<iostream>
    using namespace std;

    class Hero{
        public :
        int health;
        int level;
         
        // Constructor
        Hero(){
            cout<<"Constructor is called"<<endl;
        }

        //Destructor
        ~Hero(){
            cout<<"Destructor is called"<<endl;
        }


    };

    int main(){
    Hero h1; //Statically
    //For statically allocations destructro is automatically called



    Hero *h2 = new Hero(); //Dynamically
    //For dynamically we manually called the destructor
    delete h2;
    }