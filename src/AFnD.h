#ifndef AFnD_H
#define AFnD_H
class AFnD
{
	protected:
		char ** matrix;
		char* estados;
		char* alfabeto; 
		int col;
		int fil;
		char est_inicial;
		char est_final;
	public:
		AFnD();
		void setDimension(int a, int b);
		void setTransicion( char **m);
		void setAlfabeto(char* alf);
		void setEstados(char* est);
		void setInicioyFinal(char i, char f);
		int size_alphabet();
		int size_states();
		char ** transicion();
		char* states();
		char* alphabet();
		char e_inicial();
		char e_final();

};

#endif