#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}
