main: ZadParzyste.o ZadPrzekazywanieTablicZPodaniemRozmiaru.o ZadPetle.o ZadPrzekazywanieTablicKopia.o ZadKcpp.o main.o
	g++ main.o ZadParzyste.o ZadPrzekazywanieTablicZPodaniemRozmiaru.o ZadPetle.o ZadPrzekazywanieTablicKopia.o  ZadKcpp.o -o main
	rm -rf *.o


ZadParzyste.o: src/ZadParzyste.cc
	g++ -c src/ZadParzyste.cc -I./include -o ZadParzyste.o

ZadPrzekazywanieTablicZPodaniemRozmiaru.o: src/ZadPrzekazywanieTablicZPodaniemRozmiaru.cc
	g++ -c src/ZadPrzekazywanieTablicZPodaniemRozmiaru.cc -I./include -o ZadPrzekazywanieTablicZPodaniemRozmiaru.o

ZadPetle.o: src/ZadPetle.cc
	g++ -c src/ZadPetle.cc -I./include -o ZadPetle.o

ZadPrzekazywanieTablicKopia.o: src/ZadPrzekazywanieTablicKopia.cc
	g++ -c src/ZadPrzekazywanieTablicKopia.cc -I./include -o ZadPrzekazywanieTablicKopia.o

ZadKcpp.o: src/ZadKcpp.cc
	g++ -c src/ZadKcpp.cc -I./include -o ZadKcpp.o

main.o: main.cc
	g++ -c main.cc -I./include -o main.o

clean:
	 rm -rf *.o *.o
cleanall:
	 rm -rf *.o *.o *~ main
