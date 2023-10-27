#include <iostream>
#include <fstream>

using namespace std;


int main(){
    ofstream myfile ("example3.txt");
    ifstream myfile2;
    streampos begin, end;

    myfile << "0123456789";
    myfile.close();

    myfile2.open("example3.txt");

    begin = myfile2.tellg();

    myfile2.seekg(0, ios::end);
    end = myfile2.tellg();

    myfile2.close();

    cout << end - begin << endl;

    return 0;
}