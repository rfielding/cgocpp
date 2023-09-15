package main

// #cgo CFLAGS: -I .
// #cgo LDFLAGS: -L . -lmy_class
// #include "MyClassWrapper.h"
import "C"

func main() {
    obj := MyClass2_new()
    defer MyClass_delete(obj)
    MyClass_say_hello(obj)
}
