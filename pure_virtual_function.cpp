#include <iostream>
using namespace std;

// Abstract base class
class Animal 
{
    public:
    // Pure virtual function
    virtual void makeSound() = 0;
};

// Derived class
class Dog : public Animal 
{
    public:
    void makeSound()
    {
        cout << "Woof!" << endl;
    }
};

// Another derived class
class Cat : public Animal 
{
    public:
    void makeSound() 
    {
        cout << "Meow!" << endl;
    }
};

int main() 
{
    // Animal a; // Error: cannot instantiate abstract class
    Dog d;
    Cat c;

    d.makeSound();  // Output: Woof!
    c.makeSound();  // Output: Meow!

    return 0;
}