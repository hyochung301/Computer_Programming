#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string s;

    fstream myfile("ioexample.txt");
    fstream writefile("exercise1.txt");

    while(getline(myfile, s)){
        writefile << s << endl;
    }

    myfile.close();
    writefile.close();

    return 0;

}