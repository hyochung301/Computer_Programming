#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


void print_vector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    
}


int main(){
    vector<int> v = {50, 20, 10, 40, 30};
    cout << "base state vector" << endl;
    print_vector(v);

    cout << "sort vector" << endl;
    sort(v.begin(), v.end());
    print_vector(v);


    return 0;
    
}