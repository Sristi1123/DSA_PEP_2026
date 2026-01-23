#include <iostream>
using namespace std;
class Student {
public:
    Student() {
        cout << "Constructor called\n";
    }

    ~Student() {
        cout << "Destructor called";
    }
};
int main(){
    Student();
    return 0;
}