run: libmy_class.so
	go run main.go
libmy_class.so: MyClass.cpp MyClassWrapper.cpp MyClass.h
	g++ -shared -o libmy_class.so MyClass.cpp MyClassWrapper.cpp -fPIC
clean:
	rm libmy_class.so
