#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    int speed;
    string color;
    // Car(){
    //     cout<<"this is a default constructor method"<<endl;
    // }
    Car(string name){
        this->name=name;
    }
    void increaseSpeed(){
        
    }
    void fly(){
        
    }
};
int main() {
    Car c1("alto");
    return 0;
}

//another

#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    int speed;
    string color;
    // Car(){
    //     cout<<"this is a default constructor method"<<endl;
    // }
    Car(string x){
        name=x;
    }
    void increaseSpeed(){
        
    }
    void fly(){
        
    }
};
int main() {
    Car c1("alto");
    return 0;
}

