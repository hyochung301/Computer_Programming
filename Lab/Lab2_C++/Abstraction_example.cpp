#include <iostream>
using namespace std;

class SmartPhone {
    public:
        virtual void takeASelfie(){
            cout << "Selfie taken" << endl;
        }
};

int main() {
    SmartPhone sm;
    sm.takeASelfie();
    return 0;  
}