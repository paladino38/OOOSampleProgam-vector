# include "artista.h"

artista::artista(string n, int i){
	nome  = n;
	idade = i;
}
string artista::getnome(){
	return nome;
}
int artista::getidade(){
	return idade;
}

