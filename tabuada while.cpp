#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	int numero, tabuada, contador = 1;
	cout << "digite o n�mero:";
	cin >> numero;
	while (contador <= 10){
		tabuada = contador * numero;
	cout << tabuada << endl;
	contador++;
	}

	
	
	
	
	
	
	return 0;
}
