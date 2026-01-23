// class: blueprint of object -> generally have attributes(data member) and behaviors(functions)
// object: real world entity

//class by default has private access specifier it means all the members of class are private no one can access them from outside the class

//will class take space in memory if we are not creating object of that class->no

//by defalut value will print of speed as it is not provided
class Car{
    public:
    string name;
    int speed;
    string color;
    void increaseSpeed(){
        
    }
    void fly(){
        
    }
};
int main() {
    Car c1;
    cout<<c1.speed<<endl;
    return 0;
}

// always create data members with the help of constructor method(apne aap hi chl jata h call nhi krna pdta h)
// after creating a object behind the scene automatically constructor method is called

class Car{
    public:
    string name;
    int speed;
    string color;
    Car(){
        cout<<"this is a default constructor method"<<endl;
    }
    void increaseSpeed(){
        
    }
    void fly(){
        
    }
};
int main() {
    Car c1;
    Car c2;
    return 0;
}

// can we make multiple constructor methods->yes we can make multiple constructor methods with different parameter list this is called constructor overloading
//  but we cannot make two constructor methods with same parameter list

//parameterized constructor
class Car{
    public:
    string name;
    int speed;
    string color;
    Car(string n, int s, string c){
        name = n;
        speed = s;
        color = c;
    }
    void increaseSpeed(){
        
    }
    void fly(){
        
    }
};

int main() {
    Car c1("BMW", 200, "Black");
    Car c2("Audi", 250, "White");
    cout<<c1.name<<" "<<c1.speed<<" "<<c1.color<<endl;
    cout<<c2.name<<" "<<c2.speed<<" "<<c2.color<<endl;
    return 0;
}

