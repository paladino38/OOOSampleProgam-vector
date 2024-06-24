#ifndef BANDA_H
#define BANDA_H
#include "musico.h"
#include <iostream>
#include <vector>
using namespace std;
class banda{
	private:
		string nome_da_banda;
		vector<musico> inte;
		string estilo;
		string nomes_dos_musicos;
		int integrantes;
		int cont;
	public:
		banda(string n, string e);
		void addintegrantes (musico e);
		string getnome();
		string getestilo();
		vector<musico> getintegrantes();
		
		int getnumintegrantes();
		void printnome();
};
	
#endif
