   #include <iostream>
   using namespace std;

   class Hero{
      public:
      static int yourId;  //static keyword
      static string yourName; //static keyword
   };

   int Hero::yourId = 5;
   string Hero::yourName = "Daksh";
   
   int main(){
      
      cout<< Hero::yourId<<endl;
      cout<< Hero::yourName<<endl;
      
   }