#include <iostream>
using namespace std;
class Animal{
    public:
        virtual void speak(){
            cout << "can't speak" << endl;
        }
};
class Dog : public Animal{
    public :
        void speak(){
            cout << "Woof" << endl;
        }
};
class Cat : public Animal{
    public :
        void speak(){
            cout << "Meow" << endl;
        }
};
class Fish : public Animal{};

int main() {
    Animal* a = new Animal();
    int n;
    while(true){
        cout << "1.Cat 2.Dog 3.Fish 4.Exit\n Select Animal: " << endl;
        cin >> n;
        switch(n){
            case 1:
                a = new Cat();
                break;
            case 2:
                a = new Dog();
                break;
            case 3:
                a = new Fish();
                break;
            case 4:
                return 0;
        }
        a->speak();
    }
}