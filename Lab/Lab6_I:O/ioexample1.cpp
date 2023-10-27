#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile ("/Users/hyokwonchung/Desktop/10-18/ioexample.txt");

    myfile << "writing this to a file.\n";
    myfile.close();

    return 0;
}