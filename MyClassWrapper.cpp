#include "MyClassWrapper.h"
#include "MyClass.h"
#include "MyClass2.h"

extern "C" {

void* MyClass_new() {
    return new MyClass();
}

void MyClass_delete(void* obj) {
    delete reinterpret_cast<MyClass*>(obj);
}

void* MyClass2_new() {
    return new MyClass2();
}

void MyClass2_delete(void* obj) {
    delete reinterpret_cast<MyClass2*>(obj);
}

void MyClass_say_hello(void* obj) {
    MyClass* p = reinterpret_cast<MyClass*>(obj);
    p = dynamic_cast<MyClass*>(p);
    p->sayHello();
}

}
