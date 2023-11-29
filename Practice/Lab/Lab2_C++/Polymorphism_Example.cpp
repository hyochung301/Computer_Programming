#include <iostream>
using namespace std;

class Animal {
    public:
        void speak() {
            cout << "can't speak" << endl;
        }
};

class Dog : public Animal {
    public:
        void speak() {
            cout << "Woof" << endl;
        }
};
class Cat : public Animal {
    public:
        void speak() {
            cout << "Meow" << endl;
        }
};
class Fish : public Animal{};

int main(){
    Dog d;
    Cat c;
    Fish f;
    d.speak();
    c.speak();
    f.speak();
    return 0;
}