#include <iostream>
using namespace std;

class Outer {
private:
    int data = 100;

public:
    class Inner {
    public:
        void display(Outer& o) {  // Accessing Outer class members via reference
            cout << "Outer class data: " << o.data << endl;
        }
    };
};

int main() {
    Outer outerObj;
    Outer::Inner innerObj;
    innerObj.display(outerObj);  // Passing outerObj reference

    return 0;
}