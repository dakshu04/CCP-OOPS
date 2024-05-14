    #include<iostream>
    using namespace std;

    class Hero{
    public :
    int health;
    int level;

    Hero(){
    cout<<"Default Constructor is called"<<endl;
    }

    //Parameterized Constructor
    Hero(int health, char level){
        cout<<"this -> "<< this <<endl;
        this->health = health; // (this->heath) pointing toward ramesh's health  and right wala health is given by use that is new health
        //this is the pointer of current object
        this -> level = level;
    }

    void print(){
        cout<<"health "<< this->health <<endl;
        cout<<"level "<< this->level <<endl;
    }
  
     //Copy Constructor
    //  Hero(Hero temp){  //get me a error cause it is pass by value will be called and new temp will generate and new temp will again call copy constructor this loop never end so it doesnt work but 
     // but if we pass it by reference then no new temp will be generated and our value will get pass by
    //     this->health = temp.health;
    //     this->level =  temp.level;
    //  }

    //By reference
    Hero(Hero& temp){  //temp hero ko hi point kar raha h
        cout<<"Copy Constructor called"<<endl;
         this->health = temp.health;
         this->level =  temp.level;
    }


    };

    
    
    int main(){


        Hero Ramesh(70,'A');
        Ramesh.print();

        //Copy Constructor
        Hero Suresh(Ramesh);  //Constructor will be called itself
        Suresh.print();





        // cout<<"Before Constructor"<<endl;
        // //Object Created Statically
        // Hero Ramesh(90);
        // cout<<"Address of Ramesh "<< &Ramesh <<endl;
        // cout<<"After Constructor"<<endl;
        

        // //Object Created Dynamically 
        // Hero *h1 = new Hero(11);
    }