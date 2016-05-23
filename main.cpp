#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename Container>
Container& split(Container& result,
  const typename Container::value_type& s,
  const typename Container::value_type& delimiters)
{
  result.clear();
  size_t current;
  size_t next = -1;
  do {
    current = next + 1;
    next = s.find_first_of( delimiters, current );
    result.push_back( s.substr( current, next - current ) );
  } while (next != Container::value_type::npos);
  return result;
}

int main(int argc, char const *argv[])
{
	vector <vector <string> > transicion;
	const string token="\t";
	string linea;
	vector<string> campo;
	string estado_final;
	string estado_inicial;
	//Leer archivo//
	for(ifstream archivo("funcion_transicion.txt"); getline(archivo,linea);){
			transicion.push_back(split(campo,linea,token));
	}
	cin >> estado_inicial >> estado_final;
	
	
	
	return 0;
}