#include <iostream>
using namespace std;

class Hero {
    
    // properties
    private:
    int health; // if class is empty then also give 1 byte because of identification
    public:
    char level; 
    void print(){
        cout<< level <<endl;
    }

//Getter and Setters
    int gethealth(){
        return health;
    }

    int getlevel(){
        return level;
    }

    int sethealth(int h){
        health = h;
    }

    int setlevel(int l){
        level = l;
    }

};

int main(){
    // creation of object
    Hero ramesh;
    // ramesh.health = 70; health is private so it gives us error
    // but by the help iof getters and setters func we can have this values

    
    ramesh.sethealth(5);
    ramesh.level = 'A';

    // cout << "Health of Ramesh is " << ramesh.health << endl;
    cout<<"Ramesh health is "<<ramesh.gethealth()<<endl;
    cout << "Level of Ramesh is " << ramesh.level << endl;
    
   
    // cout << "size: " << sizeof(ramesh) << endl;

    return 0;
}
