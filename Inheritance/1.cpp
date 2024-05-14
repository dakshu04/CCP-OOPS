    #include <iostream>
    using namespace std;

    // class Human {
    //  public :
    //  int height;
    //  int age;
    //  int weight;
     
    //  public :
    //   int getAge(){
    //     return this->age;
    //   }


    //   void setWeight(int w){
    //     this->weight = w;
    //   }
    // };

    // class Male : public Human {
    //     public : 
    //     string color;
    //     void sleep(){
    //         cout<<"Male Sleeping"<<endl;
    //     }
    // };

    class Animal {
        public :
        int age;
        int weight; 

        void barks(){
            cout<<"Animal Barks"<<endl;
        }
    };

    class Human {
        public : 
        string color;

        public:
        void speak(){
            cout<< "Speaking "<<endl;
        }
    };
         

     //Multiple Inheritance
     class Hybrid:public Animal, public Human {

     };
      

      //Heirarichal Inheritance
    //   class A{
    //     public:
    //     void func1(){
    //         cout<<"Inside Function 1"<<endl;
    //     }
    //   };

    //   class B: public A{
    //     public:
    //     void func2(){
    //         cout<<"Inside Function 2"<<endl;
    //     }
    //   };

    //    class C: public A{
    //     public:
    //     void func3(){
    //         cout<<"Inside Function 3"<<endl;
    //     }
    //   };


       //Hybrid Inheritance - Combination of more than one type of inheritance




      //Scope Resolution operator-Ambiguity In Inheritance
      class A {
        public:
        void func() {
            cout<<"I am A"<<endl;
        }
      };

       class B {
        public:
        void func() {
            cout<<"I am B"<<endl;
        }
      };

       class C: public A, public B {
        public:
        void func() {
            cout<<"I am C"<<endl;
        }
      };


    int main(){
    // Male m1;
    // m1.setWeight(20);
    // cout<<m1.age<<endl;
    // cout<<m1.weight<<endl;
    // m1.sleep();
    // cout<<m1.color<<endl;
     
    //  Hybrid h1;
    //  h1.speak();
    //  h1.barks();

    // A a1;
    // a1.func1();

    // B b1;
    // b1.func1();
    // b1.func2();

    // C c1;
    // c1.func1();
    // c1.func3();

    C c1;

    c1.A::func();
    c1.B::func();
    c1.C::func();
    
    }