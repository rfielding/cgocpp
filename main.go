package main

// #cgo CFLAGS: -I .
// #cgo LDFLAGS: -L . -lmy_class
// #include "MyClassWrapper.h"
import "C"

func main() {
    obj := C.MyClass_new()
    defer C.MyClass_delete(obj)
    C.MyClass_say_hello(obj)
}
