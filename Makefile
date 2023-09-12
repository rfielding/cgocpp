run: libmy_class.so
	go run main.go
libmy_class.so: MyClass.cpp my_class_wrapper.cpp MyClass.h
	g++ -shared -o libmy_class.so MyClass.cpp my_class_wrapper.cpp -fPIC
clean:
	rm libmy_class.so
