#ifndef MY_CLASS_WRAPPER_H
#define MY_CLASS_WRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

void* MyClass_new();
void  MyClass_delete(void* obj);
void  MyClass_say_hello(void* obj);

#ifdef __cplusplus
}
#endif

#endif
