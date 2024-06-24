#ifndef FESTIVAL_H
#define FESTIVAL_H
#include "banda.h"
#include "atracao.h"
#include <string>
#include <vector>
using namespace std;
class festival : public atracaoabstrata{
		private:
			vector<banda> b;
			vector<musico> c;
			string nome_dos_musicos;
			int size;
			int size2;
		public:
			festival( string t, string h ,int d);
			void addbanda(banda e);
			int getsize();
			vector<banda> getbanda();
			string getmusico();
			vector<musico>getmusivet();
			int getsize2();
			
};
#endif
