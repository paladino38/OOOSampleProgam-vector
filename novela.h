#ifndef NOVELA_H
#define NOVELA_H
#include "ator.h"
#include "atracao.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class novela : public atracao{
		private:
		
			int size;
		public:
		novela(string t, string h ,int d);
		void addator( ator b);
		int getsize();
};
#endif
