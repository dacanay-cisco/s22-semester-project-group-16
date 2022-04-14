read: main.o controller.o
	g++ main.o controller.o -o read

main.o: main.cpp
	g++ main.cpp -c 

controller.o: controller.cpp
	g++ controller.cpp -c 

clean:
	rm -f *.o read