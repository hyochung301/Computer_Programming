#include <iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;

    public:
        void setName(string name){
            this->name = name;
        }
        string getName() {
            return name;
        }
        void setAge(int age){
            this->age = age;
        }
        int getAge(){
            return age;
        }
};

int main(){
    Person* person = new Person();
    person->setName("Jin");
    person->setAge(25);
    cout << "Name: " << person->getName() << endl;
    cout << "Age: " << person->getAge() << endl;
    return 0;
}