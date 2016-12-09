#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <string.h>
using namespace std;

int main () {
    multimap<string,string> mapa;
    multimap<string,string>::iterator it;
    multimap<string,string>::key_compare micomp = mapa.key_comp();
    string line;
    ifstream archivo("gramatica.txt");
    if(archivo.is_open()){
        while(getline(archivo,line)){
            auto index = line.find("->");
            pair<string,string> par;
            if(index != string::npos){
                par = make_pair(line.substr(0,index),line.substr(index+1));
                while(!par.second.empty() && par.second.front()== ' '){
                    par.second.erase(0,1);
                }
            }
        mapa.insert(par);
        }
    }
    int j=0;    
    for (it = mapa.begin(); it != mapa.end(); ++it){
        cout << (*it).first << " =" << (*it).second <<endl;

    }
    int cont=0;
    string inicio=mapa.find("S ")->second;
    const char* ini=inicio.c_str();
    //REVISAR POR NO MAS DE DOS TERMINALES
    char nterminales []= "TS"; //Terminales (buscar forma de que del mapa se puedan sacar)
    char *aux = strpbrk(ini,nterminales);
    for (int i = 0; i < strlen(aux); ++i)
    {
        if (aux[i]=='S')
        {
            cont++;
        }
        else if (aux[i]=='T'){
            cont++;
        }
    }
    if (cont>1)
    {
        cout<<"La gramatica es ambigua"<<endl;
    }
    else{
        cout<<"La gramatica no es ambigua"<<endl;
        

    }
    return 0;
}