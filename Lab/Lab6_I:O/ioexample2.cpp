#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream myfile ("/Users/hyokwonchung/Desktop/10-18/ioexample.txt");
    string s;


    cout << "Read file:" << endl;


    if(myfile.is_open()){
        while(getline(myfile, s)){
            cout << s << endl;
        }
        myfile.close();
    }
    else cout << "Unable to open file" << endl;

    return 0;


}