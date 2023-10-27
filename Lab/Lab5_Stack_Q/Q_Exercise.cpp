#include <iostream>
#include <queue>

using namespace std;

int FindMaxInQueue(const queue<int>& q) {
    int max = q.front();
    queue<int> temp = q;
    while (!temp.empty()) {
        if (temp.front() > max) {
            max = temp.front();
        }
        temp.pop();
    }
    return max;
}

int main() {
    queue<int> myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(4);
    myQueue.push(3);
    myQueue.push(10);
    myQueue.push(5);

    cout << FindMaxInQueue(myQueue) << endl;
}