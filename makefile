wave: main.o controller.o console.o wavmodel.o processor.o echo.o lowpass.o normalize.o reverse.o
	g++ main.o controller.o console.o wavmodel.o processor.o echo.o lowpass.o normalize.o reverse.o -o wave

main.o: main.cpp
	g++ main.cpp -c 

controller.o: controller.cpp
	g++ controller.cpp -c 

console.o: console.cpp
	g++ console.cpp -c

wavmodel.o: wavmodel.cpp
	g++ wavmodel.cpp -c

processor.o: processor.cpp
	g++ processor.cpp -c

echo.o: echo.cpp
	g++ echo.cpp -c

lowpass.o: lowpass.cpp
	g++ lowpass.cpp -c

normalize.o: normalize.cpp
	g++ normalize.cpp -c

reverse.o: reverse.cpp
	g++ reverse.cpp -c

clean:
	rm -f *.o wave
