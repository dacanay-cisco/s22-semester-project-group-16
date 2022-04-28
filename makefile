wave: main.o controller.o model.o console.o wavreader.o wav.o
	g++ main.o controller.o model.o console.o wavreader.o wav.o -o wave

main.o: main.cpp
	g++ main.cpp -c 

controller.o: controller.cpp
	g++ controller.cpp -c 

model.o: model.cpp
	g++ model.cpp -c

console.o: console.cpp
	g++ console.cpp -c

wav_header.o: wavreader.cpp
	g++ wavreader.cpp -c

wav.o: wav.cpp
	g++ wav.cpp -c

clean:
	rm -f *.o wave
