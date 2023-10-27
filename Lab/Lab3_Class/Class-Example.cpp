#include <iostream>

using namespace std;

class dummy_class {

    public:
    int dum_var = 1;
    void print_var(void);


};

void dummy_class::print_var(void) {
    cout << dum_var << endl;
}


void print_var(int var) {
    cout << var << endl;
}

int main()
{
    dummy_class d;
    d.print_var();
    print_var(d.dum_var);
    
    return 0;
}