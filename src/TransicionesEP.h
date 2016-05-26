#ifndef TransicionesEP_H
#define TransicionesEP_H
class TransicionesEP
{
protected:
	char* transA;
	char* transB;	

public:
	TransicionesEP();
	char* getTransA();
	char* getTransB();
	void setTransA(char* a, int cont);
	void setTransB(char* b, int cont);
	
};

#endif
