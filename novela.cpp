#include "novela.h"

novela::novela(string t, string h ,int d) : atracao(t,h,d){
	size = 0;
}

void novela::addator( ator b){
	a.push_back(b);
	size++;
}
int novela::getsize(){
		return size;
}
