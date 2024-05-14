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

class Student {
    int a;
    int b;
    char c;
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
    
    cout<<"Size of Ramesh " <<sizeof(ramesh)<<endl;
    // cout << "size: " << sizeof(ramesh) << endl;


    Student s1;
    cout<<"Size of s1 is "<<sizeof(s1)<<endl; //12 (4*3)(dur to padding - system always want to store the sizes in the memory in the multiple of sizes so extra size known as padding is added into ch variable)
    //The difference between the expected and actual size is due to the padding added by the compiler to meet alignment requirements. Therefore, the output size of 8 bytes is correct given the typical behavior of compilers regarding memory alignment and padding.

    return 0;
}
