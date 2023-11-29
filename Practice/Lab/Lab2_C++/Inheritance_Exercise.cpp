#include <iostream>
using namespace std;
 
//Derived class
class Car{
    protected:
        string name;
        int speed = 0, totalDistance = 0, hours = 0, totalHours = 0;

    public: 
        Car(string _name){
            name = _name;
        }
        void drive(int _speed, int _hours){
            speed = _speed;
            hours = _hours;
            totalDistance += speed * hours;
            totalHours += hours;
        }
        void showDistance(){
            cout << name << " has driven " << totalDistance << " km" << endl;
        }
        void showHoursDriven(){
            cout << name << " has driven " << totalHours << " hours" << endl;
        }
};

class Avante : public Car {
    private:
        int remainingDistance = 500;
    public:
        Avante(): Car("Avante"){};
        void status(){
            cout << name << " can drive " << remainingDistance - totalDistance << " km more" << endl;

        }
};


int main() {
    Avante c;
    c.drive(40,2);
    c.showHoursDriven();
    c.drive(80,1);
    c.showDistance();
    c.status();
    return 0;
}