#include <iostream>
using namespace std;
class Car{
    private:
        string name;
        int speed = 0, totalDistance = 0, hours = 0, totalHours = 0;
    public:
        //Constructor
        Car(string _name){
            name = _name;
        }
        void drive(int _speed, int _hours){
            speed = _speed;
            hours = _hours;
            totalHours = totalHours + hours;
            totalDistance = totalDistance + (speed * hours);
        }
        void showDistance(){
            cout << name << " has driven " << totalDistance << " km" << endl;
        }
        void showHoursDriven(){
            cout << name << " has driven " << totalHours << " hours" << endl;
        }
};
int main() {
    Car c("Avante");
    c.drive(40,2);
    c.showHoursDriven();
    c.drive(80,1);
    c.showDistance();
    return 0;
}