package main

// #cgo CFLAGS: -I .
// #cgo LDFLAGS: -L . -lmy_class
// #include "my_class_wrapper.h"
import "C"

func main() {
    obj := C.my_class_new()
    defer C.my_class_delete(obj)
    C.my_class_say_hello(obj)
}
