#ifndef ATRACAOABSTRATA_H
#define ATRACAOABSTRATA_H
#include <iostream>
using namespace std;
class atracaoabstrata{
	protected:
		string titulo;
		string horario;
		int duracao;
	public:
		atracaoabstrata( string t, string h, int d);
		string gettitulo();
		int getduracaominutos();
		string gethorario();
};
#endif
