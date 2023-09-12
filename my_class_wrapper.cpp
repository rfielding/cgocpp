#include "my_class_wrapper.h"
#include "my_class.h"

extern "C" {

void* my_class_new() {
    return new MyClass();
}

void my_class_delete(void* obj) {
    delete reinterpret_cast<MyClass*>(obj);
}

void my_class_say_hello(void* obj) {
    reinterpret_cast<MyClass*>(obj)->sayHello();
}

}
