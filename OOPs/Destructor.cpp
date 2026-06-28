#include <iostream>
using namespace std;

class Student {
private:
    int* marks;

public:
    // Constructor
    Student() {
        cout << "Allocating memory for marks..." << endl;
        marks = new int[100];
    }

    void setMarks(int index, int value) {
        if (index >= 0 && index < 100) {
            marks[index] = value;
        }
    }

    void displayMarks(int index) {
        if (index >= 0 && index < 100) {
            cout << "Marks[" << index << "] = " << marks[index] << endl;
        }
    }

    // Destructor
    ~Student() {
        cout << "Freeing allocated memory..." << endl;
        delete[] marks;
    }
};

int main() {
    Student s1;

    s1.setMarks(0, 85);
    s1.setMarks(1, 92);

    s1.displayMarks(0);
    s1.displayMarks(1);

    cout << "End of main function" << endl;

    return 0;
}
