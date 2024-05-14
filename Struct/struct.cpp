// // In C++ We can Initialize the Variables with Declaration in Structure.
 
// #include <iostream>
// using namespace std;
 
// struct Point {
//     int x = 0; // It is Considered as Default Arguments and no Error is Raised
//     int y = 1;
// };
 
// int main()
// {
//     struct Point p1;
 
//     // Accessing members of point p1
//     // No value is Initialized then the default value is considered. ie x=0 and y=1;
//     cout << "x = " << p1.x << ", y = " << p1.y<<endl;
   
//     // Initializing the value of y = 20;
//     p1.y = 20;
//     cout << "x = " << p1.x << ", y = " << p1.y;
//     return 0;
// }




// #include <iostream>
// using namespace std;
 
// struct Point {
//     int x, y;
// };
 
// int main()
// {
//     struct Point p1 = { 1, 2 };
 
//     // p2 is a pointer to structure p1
//     struct Point* p2 = &p1;
 
//     // Accessing structure members using
//     // structure pointer
//     cout << p2->x << " " << p2->y;
//     return 0;
// }

#include <iostream>
 
using namespace std;
 
struct point {
    int value;
};
 
int main()
{
 
    struct point g;
    // Initialization of the structure pointer
    struct point* ptr = &g;
    cout<<ptr<<endl;
    cout<<&g<<endl;
 
    return 0;
}