#include "atracaoabstrata.h"

atracaoabstrata::atracaoabstrata( string t, string h, int d){
		titulo = t;
		horario = h;
		duracao = d;
}
string atracaoabstrata::gettitulo(){
	return titulo;
}
int atracaoabstrata::getduracaominutos(){
	return duracao;
}
string atracaoabstrata::gethorario(){
	return horario;
}
