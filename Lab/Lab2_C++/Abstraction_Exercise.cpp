#include <iostream>
using namespace std;

class Sum{
    private: int x, y, z; //private variables
    public:
        void add(int x, int y)
        {
            cout << "Enter two numbers:";
            cin >> x >> y;
            z = x + y;
            cout << "Sum of two number is:" << z << endl;
        }
};
int main()
{
    Sum s;
    s.add(5, 6);
    return 0;
}