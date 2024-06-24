#include "banda.h"

banda::banda(string n, string e){
	nome_da_banda = n;
	estilo = e;
	integrantes = 0;
	
}
void banda::addintegrantes (musico e){
	inte.push_back(e);
	integrantes++;
	nomes_dos_musicos = nomes_dos_musicos + e.getnome();
	
}
string banda::getnome(){
	return nome_da_banda;
}
string banda::getestilo(){
	return estilo;
}
vector<musico> banda::getintegrantes(){
	return inte;
	
	
}
int banda::getnumintegrantes(){
	return integrantes;
}
void banda::printnome(){
	int i;
	for(i=0; i<integrantes; i++){
		cout << inte[i].getnome() << endl;
	}
}


