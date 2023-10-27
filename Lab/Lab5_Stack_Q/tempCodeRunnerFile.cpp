#include <iostream>
#include <queue>

using namespace std;

int FindMaxInQueue(constqueue<int>& q) {
    int max = q.front();
    for (int i = 0; i < q.size(); i++) {
        if (q[i] > max) {
            max = q[i];
        }
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