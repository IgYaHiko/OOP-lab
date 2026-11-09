#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack top: " << s.top() << endl;

    s.pop();

    cout << "After pop, Stack top: " << s.top() << endl;

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue front: " << q.front() << endl;

    q.pop();

    cout << "After pop, Queue front: " << q.front() << endl;

    return 0;
}