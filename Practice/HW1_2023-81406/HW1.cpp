// Creator:  HW1 Hyokwon Chung(2023-81406) Computer Programming Prof. Uhm Fall 2023
#include <iostream>
#include <string>
using namespace std;

int destruct_cnt = 0;


class MyClass {
public:
    MyClass(const char* name) {
        strcpy(this->name, name);
        cout << "This is constructor: " << name << endl;
    }

    ~MyClass() {
        destruct_cnt++;
        cout << "This is destructor: " << name << " | " << destruct_cnt << endl;
    }

private:
    char name[100];
};

// Method 1: Create a local variable
void method1() {
    MyClass obj("Object 1");
}

// Method 2: Create an object on the heap(using new) and deleting it
void method2() {
    MyClass* obj = new MyClass("Object 2");
    delete obj;
}



// Method 3: Create an global object and letting it go out of scope

MyClass obj1("Object 3");




int main() {
    method1();
    method2();

    // Method 4: Create temporary object and letting it go out of scope
    MyClass obj2("Object 4");

    return 0;
}
