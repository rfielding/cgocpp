#include "my_class_wrapper.h"
#include "my_class.h"

extern "C" {

void* new_my_class() {
    return new MyClass();
}

void delete_my_class(void* obj) {
    delete reinterpret_cast<MyClass*>(obj);
}

void say_hello(void* obj) {
    reinterpret_cast<MyClass*>(obj)->sayHello();
}

}
