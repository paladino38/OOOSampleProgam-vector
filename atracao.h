#ifndef ATRACAO_H
#define ATRACAO_H
#include "ator.h"
#include "atracaoabstrata.h"
#include <vector>
class atracao : public atracaoabstrata{

	protected:
	 vector<ator> a;
	public:
		atracao(string t, string h, int d);
		vector<ator> getator();
};
#endif
