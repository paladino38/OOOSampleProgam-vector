#include "festival.h"
festival::festival(string t, string h ,int d) : atracaoabstrata(t,h,d){
	size=0;
	size2 = 0;
}
void festival::addbanda(banda e){
	b.push_back(e);
	size++;
	titulo = titulo+ " " +e.getnome() + ',';
	vector<musico> a;
	a = e.getintegrantes();
	for(int i = 0; i<a.size(); i++){
		c.push_back(a[i]);
		size2++;
	}
	
}
int festival::getsize(){
	return size;
}
vector<banda> festival::getbanda(){
		return b;
}


vector<musico> festival::getmusivet(){
	return c;
}

int festival::getsize2(){
	return size2;
}
