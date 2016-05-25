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
	public:
		AFnD();
		void setDimension(int a, int b);
		void setTransicion( char **m);
		void setAlfabeto(char* alf);
		void setEstados(char* est);
		int size_alphabet();
		int size_states();
		char ** transicion();
		char* states();
		char* alphabet();

};

#endif