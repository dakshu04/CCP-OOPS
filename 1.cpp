#include <iostream>
using namespace std;

class Hero {
    
    // properties
    public:
    int health; // if class is empty then also give 1 byte because of identification
    char level; 
    void print(){
        cout<< level <<endl;
    }
};

int main(){
    // creation of object
    Hero ramesh;

    cout << "Health of Ramesh is " << ramesh.health << endl;
    cout << "Level of Ramesh is " << ramesh.level << endl;
    
   
    // cout << "size: " << sizeof(ramesh) << endl;

    return 0;
}
