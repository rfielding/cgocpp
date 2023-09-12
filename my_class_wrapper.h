#ifndef MY_CLASS_WRAPPER_H
#define MY_CLASS_WRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

void* my_class_new();
void  my_class_delete(void* obj);
void  my_class_say_hello(void* obj);

#ifdef __cplusplus
}
#endif

#endif
