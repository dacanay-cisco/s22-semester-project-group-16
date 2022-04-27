wave: main.o controller.o model.o console.o
	g++ main.o controller.o -o wave

main.o: main.cpp
	g++ main.cpp -c 

controller.o: controller.cpp
	g++ controller.cpp -c 

model.o: model.cpp wavmodel.o wavreader.o wav.o
	g++ model.cpp -c wavmodel.o wavreader.o wav.o

console.o: console.cpp
	g++ console.cpp -c

wavmodel.o: wavmodel.cpp
	g++ wavmodel.cpp -c

wavreader.o: wavreader.cpp
	g++ wavreader.cpp -c

wav.o: wav.cpp
	g++ wav.cpp -c

clean:
	rm -f *.o read
