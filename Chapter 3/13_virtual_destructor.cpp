// Concept 13: Virtual Destructor
#include <iostream>

class Base {
public:
    virtual ~Base() {
        std::cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    ~Derived() override {
        std::cout << "Derived destructor\n";
    }
};

int main() {
    Base* pointer = new Derived();
    delete pointer;
    return 0;
}

// Modern alternative:
// #include <memory>
// std::unique_ptr<Base> pointer = std::make_unique<Derived>();
