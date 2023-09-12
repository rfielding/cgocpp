package main

// #cgo CFLAGS: -I .
// #cgo LDFLAGS: -L . -lmy_class
// #include "my_class_wrapper.h"
import "C"

func main() {
    obj := C.new_my_class()
    C.say_hello(obj)
    C.delete_my_class(obj)
}
