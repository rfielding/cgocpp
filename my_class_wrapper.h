#ifndef MY_CLASS_WRAPPER_H
#define MY_CLASS_WRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

void* new_my_class();
void delete_my_class(void* obj);
void say_hello(void* obj);

#ifdef __cplusplus
}
#endif

#endif
