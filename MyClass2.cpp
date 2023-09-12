#include "MyClass2.h"
#include <iostream>

MyClass2::MyClass2() {
    std::cout << "MyClass2 Constructor Called." << std::endl;
}

MyClass2::~MyClass2() {
    std::cout << "MyClass2 Destructor Called." << std::endl;
}

void MyClass2::sayHello() {
    std::cout << "MyClass2 Hello from C++!" << std::endl;
}
