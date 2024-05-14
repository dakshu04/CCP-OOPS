   #include <iostream>
   using namespace std;

   class Hero{
      public:
      static int yourId;  //static keyword - Object create krne ki need nahi h
      static string yourName; //static keyword - Object create krne ki need nahi h
   };

   int Hero::yourId = 5;
   string Hero::yourName = "Daksh";
   
   int main(){
      
      cout<< Hero::yourId<<endl;
      cout<< Hero::yourName<<endl;
      
   }