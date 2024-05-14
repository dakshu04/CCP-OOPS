#include<iostream>
using namespace std;

class Hero{
    public:
  char level ='A';
  int health = 5;
};

int main(){

    //static allocation
    Hero a;
    cout<<a.health<<endl;
    cout<<a.level<<endl;


    //dynamically
  Hero *b = new Hero;  //Memory is store in heap
  cout<<sizeof(*b)<<endl;
//   cout<<"Health of b is "<<b->health<<endl;
//   cout<<"Level of b is "<<b->level<<endl;  can be achieved deferencing the pointer variable b
// cout<<"Health of b is "<<(*b).health<<endl;
// cout<<"Level of b is "<<(*b).level<<endl;


//Statically hotw . operator and
// and if Dynamically ho tw -> arrow operator
}