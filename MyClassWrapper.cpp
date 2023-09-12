#include "MyClassWrapper.h"
#include "MyClass.h"

extern "C" {

void* MyClass_new() {
    return new MyClass();
}

void MyClass_delete(void* obj) {
    delete reinterpret_cast<MyClass*>(obj);
}

void MyClass_say_hello(void* obj) {
    reinterpret_cast<MyClass*>(obj)->sayHello();
}

}
