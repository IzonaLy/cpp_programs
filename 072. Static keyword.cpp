#include <iostream>

class Counter {
private:
    static int count; // Static variable to keep track of the number of instances

public:
    // Constructor
    Counter() {
        count++; // Increment the count whenever a new object is created
    }

    // Destructor
    ~Counter() {
        count--; // Decrement the count whenever an object is destroyed
    }

    // Static function to get the current count
    static int getCount() {
        return count;
    }
};

// Initialize the static variable
int Counter::count = 0;

int main() {
    std::cout << "Initial count: " << Counter::getCount() << std::endl;

    Counter obj1; // Create first object
    std::cout << "Count after creating obj1: " << Counter::getCount() << std::endl;

    Counter obj2; // Create second object
    std::cout << "Count after creating obj2: " << Counter::getCount() << std::endl;

    {
        Counter obj3; // Create third object in a new scope
        std::cout << "Count after creating obj3: " << Counter::getCount() << std::endl;
    } // obj3 goes out of scope and is destroyed

    std::cout << "Count after obj3 goes out of scope: " << Counter::getCount() << std::endl;

    return 0;
}
