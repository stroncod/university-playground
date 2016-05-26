#ifndef AFD_H
#define AFD_H
class AFD
{
	protected:
		char** matrix;
		int col;
		int fil;
		char est_inicial;
		char est_final;

	public:
		AFD();
		void imprimirAutomata();
		void setTransicion(char** m);
		void setInicioyFinal(char i, char f);
		void setDimension(int a, int b);
		int size_alphabet();
		int size_states();
};

#endif