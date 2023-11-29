#include <iostream>
#include <fstream>
#include <string>

#define MAX_OPEN_FILE 32

using namespace std;

ifstream fd_array[MAX_OPEN_FILE];
int empty_fd = 0;

int open_file(string s){
    fd_array[empty_fd].open(s);

    cout << s << endl;

    return empty_fd++;

}

void close_file(int fd){
    fd_array[fd].close();
}

int main(){
    int fd = open_file("ioexample.txt");
    string s;


    if(fd_array[fd].is_open()){
        while(getline(fd_array[fd], s)){
            cout << s << endl;
        }
        close_file(fd);
    }
    else cout << "Unable to open file" << endl;

    close_file(fd);

    return 0;


}