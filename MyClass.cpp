#include "MyClass.h"
#include <iostream>

MyClass::MyClass() {
    std::cout << "MyClass Constructor Called." << std::endl;
}

MyClass::~MyClass() {
    std::cout << "MyClass Destructor Called." << std::endl;
}

void MyClass::sayHello() {
    std::cout << "MyClass Hello from C++!" << std::endl;
}
