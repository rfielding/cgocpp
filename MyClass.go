package main

// #cgo CFLAGS: -I .
// #cgo LDFLAGS: -L . -lmy_class
// #include "MyClassWrapper.h"
import "C"
import "unsafe"

func MyClass_new() unsafe.Pointer {
  return C.MyClass_new()
}

func MyClass2_new() unsafe.Pointer {
  return C.MyClass2_new()
}

func MyClass_delete(p unsafe.Pointer) {
  C.MyClass_delete(p)
}

func MyClass_say_hello(p unsafe.Pointer) {
  C.MyClass_say_hello(p)
}

