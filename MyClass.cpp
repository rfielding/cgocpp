#include "MyClass.h"
#include <iostream>

MyClass::MyClass() {
    std::cout << "Constructor Called." << std::endl;
}

MyClass::~MyClass() {
    std::cout << "Destructor Called." << std::endl;
}

void MyClass::sayHello() {
    std::cout << "Hello from C++!" << std::endl;
}
