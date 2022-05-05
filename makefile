wave: main.o controller.o console.o wavmodel.o wav.o processor.o echo.o
	g++ main.o controller.o console.o wavmodel.o wav.o processor.o echo.o -o wave

main.o: main.cpp
	g++ main.cpp -c 

controller.o: controller.cpp
	g++ controller.cpp -c 

console.o: console.cpp
	g++ console.cpp -c
wavmodel.o: wavmodel.cpp
	g++ wavmodel.cpp -c

wav.o: wav.cpp
	g++ wav.cpp -c

processor.o: processor.cpp
	g++ processor.cpp -c

echo.o: echo.cpp
	g++ echo.cpp -c

clean:
	rm -f *.o wave
