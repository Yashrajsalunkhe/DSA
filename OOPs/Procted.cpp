#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
};

class Dog : public Animal {
public:
    void setName(string n) {
        name = n;
    }

    void display() {
        cout << name;
    }
};

int main() {
    Dog d;

    d.setName("Tommy");
    d.display();
}
