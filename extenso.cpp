//por extenso Exercicio 2

#include <iostream>
#include <stdio.h>
using namespace std;

void extenso(int dia ,int mes, int ano ){
	if(dia < 1 or dia > 31){
		cout << "Data invalida";
		return;
	}
	if(mes < 1 or mes > 12){
		cout << "Data invalida";
		return;
	}
	if(ano < 1 or ano > 9999){
		cout << "Data invalida";
		return;
	}
	
	string m[12] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
	string s;
	char buffer[5];
	sprintf(buffer,"%2d",dia);
	s += buffer;
	s += " de ";
	s += m[mes-1];
	s += " de ";
	sprintf(buffer,"%4d",ano);
	s += buffer;
	
	cout << s;
	
}

int main()
{
	extenso(18,06,2008);
    
    return 0;       
}
