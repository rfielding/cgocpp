run: libmy_class.so
	go run main.go
libmy_class.so:
	g++ -shared -o libmy_class.so my_class.cpp my_class_wrapper.cpp -fPIC
clean:
	rm libmy_class.so
