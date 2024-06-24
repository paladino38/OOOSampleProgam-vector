#include "atracao.h"
#include "banda.h"
#include "musico.h"
#include "artista.h"
#include "ator.h"
#include "atracaoabstrata.h"
#include "festival.h"
#include <vector>
#include "novela.h"
int main(){
	int i;
	musico musico1("Fulano",24);
	musico musico2("Ciclano",27);
	musico musico3("F1",23);
	musico musico4("F2",34);
	musico musico5("F3",21);
	musico musico6("Gaudencio",23);
	musico musico7("Florencio",56);
	musico musico8("Clemencio",53);
	musico musico9("Prudencio",55);
	festival festivall("Festival de bandas com:","23:00",200);
	banda banda1("Fulano & Ciclano","Sertanejo Pos-graduado");
	banda banda2("Os Efes"," Functional Metal");
	banda banda3("Gaudérios Cromáticos","Jazz Farroupilha");
	banda1.addintegrantes(musico1);
	banda1.addintegrantes(musico2);
	banda2.addintegrantes(musico3);
	banda2.addintegrantes(musico4);
	banda2.addintegrantes(musico5);
	banda3.addintegrantes(musico6);
	banda3.addintegrantes(musico7);
	banda3.addintegrantes(musico8);
	banda3.addintegrantes(musico9);
	festivall.addbanda(banda1);
	festivall.addbanda(banda2);
	festivall.addbanda(banda3);
	
	int tam2 = festivall.getsize2();
	int you;
	vector<musico> pmusico =festivall.getmusivet();
	
	cout << festivall.gettitulo() << endl;
	for( you = 0; you<tam2; you++){
		
			cout <<"Integrante " << you <<": " <<pmusico[you].getnome()<< ", " << pmusico[you].getidade() << endl;
	}
	cout << "Duração:" <<festivall.getduracaominutos()<< " " <<"minutos" <<endl;
	cout << "Horario:" <<festivall.gethorario() << " horas" << endl;
	
	cout << endl;
	cout << endl;
	
	novela novelaa("Joãos e Marias","20:00", 60);
	ator ator1("Joao I",20);
	ator ator2("Joao II",23);
	ator ator3("Joao III",25); 
	ator ator4("Joao IV",26);
	ator ator5("Maria I",21);
	ator ator6("Maria II",24);
	ator ator7("Maria III",26);
	ator ator8("Maria IV",27);
	novelaa.addator(ator1);
	novelaa.addator(ator2);
	novelaa.addator(ator3);
	novelaa.addator(ator4);
	novelaa.addator(ator5);
	novelaa.addator(ator6);
	novelaa.addator(ator7);
	novelaa.addator(ator8);
			
	
	vector<ator> pegaator = novelaa.getator();
	int tam = novelaa.getsize();
		cout << novelaa.gettitulo() << endl;
		int ok = 1;
	for (i = 0; i<tam; i++){
			cout << "Ator "<< i << ": " << pegaator[i].getnome() << ", "<< pegaator[i].getidade() <<endl;
		ok++;
	}
	cout << "Duração:" <<novelaa.getduracaominutos()<< " " <<"minutos" <<endl;
	cout << "Horario:" <<novelaa.gethorario() << " "<< "horas" << endl;
	
	
	return 0;
}
