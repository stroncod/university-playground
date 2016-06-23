#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;

int main () {
    multimap<string,string> mapa;
    multimap<string,string>::iterator it;
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
    for (it = mapa.begin(); it != mapa.end(); ++it){
      	cout << (*it).first << " =>" << (*it).second <<endl;
    }
}