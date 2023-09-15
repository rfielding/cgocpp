run: libmy_class.so
	go run MyClass.go main.go
libmy_class.so: MyClass.cpp MyClass.h MyClass2.cpp MyClass2.h MyClassWrapper.cpp
	g++ -shared -o libmy_class.so MyClass.cpp MyClass2.cpp MyClassWrapper.cpp -fPIC
clean:
	rm libmy_class.so
