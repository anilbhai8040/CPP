#include <iostream>
using namespace std;

// declare parent class
class Sample {
    // protected elements
   protected:
    int age;
    public:
    void display(int a)
    {
        age=a;
       cout<<"age="<<age<<age<<age;
    }
}abc;

// declare child class
class SampleChild : public Sample {

   public:
    void displayAge(int a) {
        age = a;
        cout << "Age = " << age << endl;
    }
     
};

int main() {
    int ageInput;
    

    // declare object of child class
    SampleChild child;

    cout << "Enter your age: ";
    cin >> ageInput;

    // call child class function
    // pass ageInput as argument
    child.displayAge(ageInput);
    abc.display(ageInput);
     cout<<ageInput;
    return 0;
}