#ifndef ATOR_H
#define ATOR_H
#include "artista.h"
#include <iostream>

class ator : public artista{
	private:
		string nome;
		int idade;
	public:
		ator(string n, int i);
};
#endif
