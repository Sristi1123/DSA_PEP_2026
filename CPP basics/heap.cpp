#include <iostream>
using namespace std;
// how to create variable in stack memory and heap memory
int main() {
    // stack memory
    int a = 10;
    cout << "Address of a in stack memory: " << &a << endl;

    // heap memory
    int *b = new int;
    *b = 20;
    cout << "Address of b in heap memory: " << b << endl;

    // Deleting variable from heap memory
    delete b;

    return 0;
}

// how to create object in stack memory and heap memory
// class Car {
// public:
//     string name;
//     int speed;
//     string color;
// };
// int main() {
//     // Object in stack memory
//     Car car1;
//     car1.name = "Toyota";
//     car1.speed = 100;
//     car1.color = "Red";
//     cout << "Car1 Name: " << car1.name << ", Speed: " << car1.speed << ", Color: " << car1.color << endl;

//     // Object in heap memory
//     Car *car2 = new Car();
//     car2->name = "Honda";
//     car2->speed = 120;
//     car2->color = "Blue";
//     cout << "Car2 Name: " << car2->name << ", Speed: " << car2->speed << ", Color: " << car2->color << endl;

//     // Deleting object from heap memory
//     delete car2;

//     return 0;
// }

        
//     }
// };
// int main() {
//     Car c1("BMW", 150, "Black");
//     cout << "Car1 Name: " << c1.name << ", Speed: " << c1.speed << ", Color: " << c1.color << endl;
//     return 0;
// }


// // Note: Remember to delete any dynamically allocated memory to avoid memory leaks.


// #include <iostream>
// using namespace std;

// class Car{
//     public:
//     string name;
//     int speed;
//     string color;
//     // Car(){
//     //     cout<<"this is a default constructor method"<<endl;
//     // }
//     Car(string x){
//         name=x;
//     }
//     void increaseSpeed(){
        
//     }
//     void fly(){
        
//     }
// };
// int main() {
//     Car *c1=new Car("tata");
//     cout<<c1->name;
//     return 0;
// }