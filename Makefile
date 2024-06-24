CXX = g++
CXXFLAGS = -g -Wall -std=c++11 -O

all: main



main: main.o atracao.o atracaoabstrata.o banda.o artista.o ator.o musico.o festival.o novela.o
	$(CXX) $(CXXFLAGS) atracao.o atracaoabstrata.o banda.o artista.o ator.o musico.o festival.o novela.o main.o -o main



main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp


atracao.o: atracao.cpp
	$(CXX) $(CXXFLAGS) -c atracao.cpp


atracaoabstrata.o: atracaoabstrata.cpp
	$(CXX) $(CXXFLAGS) -c atracaoabstrata.cpp
	
banda.o: banda.cpp
	$(CXX) $(CXXFLAGS) -c banda.cpp

	
artista.o: artista.cpp
	$(CXX) $(CXXFLAGS) -c artista.cpp

ator.o: ator.cpp
	$(CXX) $(CXXFLAGS) -c ator.cpp

musico.o: musico.cpp
	$(CXX) $(CXXFLAGS) -c musico.cpp


festival.o: festival.cpp
	$(CXX) $(CXXFLAGS) -c festival.cpp


novela.o: novela.cpp
	$(CXX) $(CXXFLAGS) -c novela.cpp


	

clean:
	@rm -f *.o main
