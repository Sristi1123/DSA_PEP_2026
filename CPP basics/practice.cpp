#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int reg;
    string course;
    Student(string name,int reg, string course){
        this->name=name;
        this->reg=reg;
        this->course=course;
    }
};
int main() {
    Student s1("Ria",12345,"CSE");
    Student s2("Raj",65432,"MEC");
    return 0;
}

// heap memory 
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int reg;
    string course;
    Student(string name){
        this->name=name;
    }
};
int main() {
    Student *s1=new Student("Ria");
    cout<<s1->name;
    return 0;
}