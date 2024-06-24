#ifndef ARTISTA_H
#define ARTISTA_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class artista{
	private:
		string nome;
		int idade;
	public:
		artista(string n, int i);
		string getnome();
		int getidade();
		
};
#endif
