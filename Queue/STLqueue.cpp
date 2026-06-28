#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.back() << endl;

    q.pop();

    cout << "After pop\n";
    cout << "Front: " << q.front() << endl;

    return 0;
}
